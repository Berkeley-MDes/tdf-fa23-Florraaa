#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#include <Wire.h>

LiquidCrystal_I2C lcd_1(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows

const int ledPin_R = 10; // Define the pin connected to the red LED
const int ledPin_B = 11; // Define the pin connected to the blue LED

const int buttonAPin = 2;  // Connect button A to digital pin 2
const int buttonBPin = 3;  // Connect button B to digital pin 3
const int buttonCPin = 4;  // Connect button C to digital pin 4

int SensT = 75; // Current temperature from the sensing end
int MaxT = 80; // Maximum temperature set by the user
int MinT = 70; // Minimum temperature set by the user

int settingMode = 0;

void setup()
{
  pinMode(buttonAPin, INPUT_PULLUP); //pull up the internal resistor
  pinMode(buttonBPin, INPUT_PULLUP);
  pinMode(buttonCPin, INPUT_PULLUP);
  
  pinMode(ledPin_R, OUTPUT);
  pinMode(ledPin_B, OUTPUT);
  
  lcd_1.init();
  lcd_1.backlight();
  lcd_1.begin(16, 2); // Initialize the LCD with 16 columns and 2 rows
  lcd_1.clear();  // Clear the LCD screen
}

void loop()
{
  int buttonAState = digitalRead(buttonAPin);
  int buttonBState = digitalRead(buttonBPin);
  int buttonCState = digitalRead(buttonCPin);

  // Check if buttonA is pressed
  if (buttonAState == LOW) {
    // Wait for button release to avoid rapid multiple presses
    while (digitalRead(buttonAPin) == LOW) {
      delay(10);
    }

    // Toggle settingMode between 0, 1, and 2
    settingMode++;
    if (settingMode > 2) {
      settingMode = 0;  // Reset to 0 after reaching 2
    }
  }
    
  // While in setting mode 1, adjust MaxT
  while (settingMode == 1) {
    lcd_1.clear();
    lcd_1.print("Setting maxTemp:");
    lcd_1.setCursor(0,1);
    lcd_1.print(MaxT);
    if (buttonBState == LOW) {
      MaxT++;
      delay(500);  
    } else if (buttonCState == LOW) {
      MaxT--;
      delay(500);  
    }
  }
    
  // While in setting mode 2, adjust MinT
  while (settingMode == 2) {
    lcd_1.clear();
    lcd_1.print("Setting minTemp:");
    lcd_1.setCursor(0,1);
    lcd_1.print(MinT);
    if (buttonBState == LOW) {
      MinT++;
      delay(500);  
    } else if (buttonCState == LOW) {
      MinT--;
      delay(500);  
    }
  }

  // While setting mode is off, show live temperature
  while (settingMode == 0) {
  	lcd_1.clear();
    lcd_1.setCursor(0, 0);
  	lcd_1.print("Live: ");
    lcd_1.setCursor(0, 1);
  	lcd_1.print(SensT);
  }

  // Control A/C unit (blue LED for cooling, red LED for heating)
  if (SensT > MaxT) {
    digitalWrite(ledPin_B, HIGH); // Turn the blue LED on
    digitalWrite(ledPin_R, LOW);  // Turn the red LED off
  } else if (SensT < MinT) {
    digitalWrite(ledPin_B, LOW);  // Turn the blue LED off
    digitalWrite(ledPin_R, HIGH); // Turn the red LED on
  } else {
    digitalWrite(ledPin_B, LOW);  // Turn the blue LED off
    digitalWrite(ledPin_R, LOW);  // Turn the red LED off
  }
}