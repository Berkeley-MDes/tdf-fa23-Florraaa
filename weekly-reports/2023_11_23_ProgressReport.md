Link back to [README.md](../README.md)

---
# Speculations
- Coding always seems complicated, but the eventual solution is often simple. 

---


# OpenAI API
This week I focused on improving the software side. Integrating the keyword selection funciton. 

The major challenge was that, since our recording (speech-to-text model) restarts every 5 seconds, directly using the short audio to pin ChatGPT frequently generates unstable results. 

Thus, I made a change so that every 6 rounds of recording, the coding asks ChatGPT to summarize keywords. 


```
# add current transcription and handle reset
addition_counter += 1

if addition_counter >= 6:
print(transcription_for_kw + "\n")
print(keyword_selection(transcription_for_kw))
print("\n\n")
transcription_for_kw = ""
addition_counter = 0
else:
transcription_for_kw += current_transcription
```


To make it easier to read, I made it a function:

```
def keyword_selection(input_sections):
# Customize key parameters of the prompt.
# keyword_count = 2
# keyword_requirements = "uncommon words or phrases"
keyword_char_count = 20
  

# Customize the prompt to instruct GPT-3 for keyword extraction
prompt = (
f"Extract 3 key phrases or keywords from {input_sections} \n"
# f"The keyword or key phrase should also be {keyword_requirements} \n"
f"Make sure the keyword or key phrase is less than {keyword_char_count} characters. \n"
"Respond with only the qualified keywords without anything else. Do not include punctuation marks or numbered list or bulleted list."
)
```