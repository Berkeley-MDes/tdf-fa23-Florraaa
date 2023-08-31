This file highlights some common uses/misuses due to "cross-markdown" between *Obsidian* and *GitHub*. 

---
Resources:

- [GitHub Markdown Documentation](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github) - General guide for GitHub writing
- [Obsidian Markdown Guide](https://www.markdownguide.org/tools/obsidian/) - Use this to check which ones are available in _Obsidian_

---

# Basic
### Emphasis
Style | Syntax | Output | Obsidian | GitHub |
----- | ----- | ----- | ----- | ----- |
Bold | `** **` or `__ __` | **Bold text** |  |  |
Italic | * * or - - | _Italic text_ |  |  |
Strikethrough | ~~ ~~ | ~~Striked out text~~  |  |  |
Highlight | == == | ==Highlighted text== |  | No |
Bold and nested italic | ** ** and _ _ | **Bold text and _nested italic text_** |  | |
Bold and italic text | *** *** or ___ ___| ___Bold and italic text___ |  | |
Subscript |  `<sub>` or `</sub>` |

# Links
```
[DuckDuckGo](https://duckduckgo.com)
```

## Internal Links
Include the file path and file suffix. 

Relative links (same folder):
```
[Week of Aug.28](weekly reports/2023_08_28_ProgressReport.md)
```

Non-relative links: 
```
[README](../README.md)
```

## Linked Image
Notice that the prefix of an image is **case-sensitive**. Use lower cases in most scenarios. 
```
![Grasshopper display error on Mac](_attachments/Grasshopper_display_error.png)
```


## Adding Titles
You can optionally add a title for a link. This will appear as a tooltip when the user **hovers over the link**. To add a title, enclose it in quotation marks after the URL.
```
My favorite search engine is [Duck Duck Go](https://duckduckgo.com "The best search engine for privacy").
```

## URLs and emails
To quickly turn a URL or email address into a link, enclose it in angle brackets.
```
<https://www.markdownguide.org>
<fake@example.com>
```

## Reference-Style Links
Reference-style links are a special kind of link that make URLs **easier to display and read in Markdown.**
```
In a hole in the ground there lived a hobbit. Not a nasty, dirty, wet hole, filled with the ends of worms and an oozy smell, nor yet a dry, bare, sandy hole with nothing in it to sit down on or to eat: it was a [hobbit-hole][1], and that means comfort.

[1]: <https://en.wikipedia.org/wiki/Hobbit#Lifestyle> "Hobbit lifestyles"
```


# Color (GitHub )
Use backticks to call out colors within a sentence. A supported color model within backticks will display a visualization of the color.

```markdown
The background color is `#ffffff` for light mode and `#000000` for dark mode.
```

# Task Lists

```
- [x] Write the press release
- [ ] Update the website
- [ ] Contact the media
```