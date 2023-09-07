Link back to [README.md](TDF-23Fall/README.md)

---
# Reflections
- I used *Grasshopper* to create a parametric geometry (in-progress) and the VR facial cushion. TJ's in-person *Grasshopper* session helped me understand the basic logic of computational modeling.
- Thanks to my previous knowledge of modeling in *Solidworks* and the help of *ChatGPT* :) I now understand the basics of *Grasshopper*. 
- *Grasshopper* (and many of its plugins) are fun to play with. 

# Speculations
- For complex surfacing I may still use *solidworks*. It will be easier to model and modify whenever. 
- I still need to follow tutorials to learn more advanced operations. There are many (Math-related) question I will have. 
- [AR fabrication](https://www.youtube.com/watch?v=xTQAeuZF74w&t=1s&pp=ygUdYXVnbWVudGVkIHJlYWxpdHkgZmFicmljYXRpb24%3D) can be used for any installations of large scale, I also wonder its capability in prototyping/building design innovations in general - *twinmotion*?

# Next steps:
1.  Design the rest of the headset (Industrial Design)
	-  This will be a quick process exploring a near-future style of XR headset to pair with the facial cushion
	- The methodology focus will be on *Gravity Sketch* ideation and prototyping
	- *Generate some parametric patterns on the front
1. Optimize the facial cushion design
	- Smooth the sharp edges

---


# Rhino Grasshopper

[Here](../projects/documents/Grasshopper.md) is my live notes of learning *Grasshopper*. 

This week's tutorials:
1. [Overview of Grasshopper under an hour](https://youtu.be/Y66bSN4QFUE)
2. [Installing Plugins](https://www.youtube.com/watch?v=vBh1UHg6ZHQ)
3. [From Rhino, Grasshopper to Keyshot (webinar series)]((https://www.youtube.com/playlist?list=PLO1Xwz4iyp_k6YEWaljxfbOdXANCKxJgf)


---

# Augmented Reality Fabrication
A workflow of physically building designs (especially *parametric design* in Architecture) with augmented reality. It is essentially a overlay of the digital artifact in the "corporal world". 

[![Augmented Reality Frabrication](https://i.ytimg.com/vi/xTQAeuZF74w/hq720.jpg?sqp=-oaymwEcCOgCEMoBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLCwk7_dvS94hcohjqN0brGgpuUcUg)](https://www.youtube.com/watch?v=xTQAeuZF74w&t=1s&pp=ygUdYXVnbWVudGVkIHJlYWxpdHkgZmFicmljYXRpb24%3D)

---

# Facial Cushion
## Parameters
Here I analyzed some key facial parameters for future references. 

The model was done in *Gravity Sketch*.

![](../projects/sketches-and-pics/computational_design/facial_parameters/IMG_3482.jpg | width=100px)
![](../projects/sketches-and-pics/computational_design/facial_parameters/IMG_3483.jpg | width=100px)
![](../projects/sketches-and-pics/computational_design/facial_parameters/IMG_3484.png | width=100px)
![](../projects/sketches-and-pics/computational_design/facial_parameters/IMG_3485.png | width=100px)

Here is the notes that visualizes these parameters on a compact VR facial cushion. 

![img](../projects/sketches-and-pics/computational_design/facial_parameters/IMG_3507.jpg | width=100px)

## Practice
### 3D Scanning
I used the mobile app *Polycam* to scan my own face. It generated a FBX file that I can import to rhino. 

The scanning was processed from a set of continuous 2D photos, which impacted the accuracy.  

The file needs some re-orientation before importing to *Grasshopper*. 

### Grasshopper
The major parameters are: 
1. Face width
2. Face depth (the distance between forehead and eyes)
3. The upper curvature (lower forehead)
4. eye distance (IPD)

Here's a screenshot of the *Grasshopper* spaghettis.  
![img](../projects/sketches-and-pics/computational_design/test_print_1/grasshopper_overview.png)
The generated geometry in *Rhino* (pink). 
![img](../projects/sketches-and-pics/computational_design/test_print_1/rhino_perspective.png)

### 3D Print
I used rigid PLA to test fitness. The print took about 4.5 hours on an *Ender 3v2* printer. 
![](../projects/sketches-and-pics/computational_design/test_print_1/front.jpg | width=100px)
![](../projects/sketches-and-pics/computational_design/test_print_1/up.jpg | width=100px)
![](../projects/sketches-and-pics/computational_design/test_print_1/side.jpg | width=100px)
![](../projects/sketches-and-pics/computational_design/test_print_1/IMG_3500.jpg | width=100px)
![](../projects/sketches-and-pics/computational_design/test_print_1/IMG_3501.jpg | width=100px)

The model turned out great, despite a noticeable gap (~3 mm) at the sides, which should be the result of using a single camera as the 3D scanner. This can be alleviated if I used flexible materials. 

![](../projects/sketches-and-pics/computational_design/test_print_1/gap.jpg | width=100px)