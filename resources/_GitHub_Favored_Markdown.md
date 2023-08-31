This file documents notes for common editing of Markdown in *Obsidian* for use in *GitHub* (a common ground). 

Only some things mentioned here have been tested. I will continue updating this document.

---
Resources:

- [GitHub Markdown Documentation](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github) - General guide for GitHub writing
- [Obsidian Markdown Guide](https://www.markdownguide.org/tools/obsidian/) - Use this to check which ones are available in _Obsidian_

---

### Links
To create a link, enclose the link text in brackets (e.g., `[Duck Duck Go]`) and then follow it immediately with the URL in parentheses (e.g., `(https://duckduckgo.com)`).
```
[DuckDuckGo](https://duckduckgo.com)
```
#### Internal Links
Remember to include the file path and file suffix!
```
[Week of Aug.28](weekly reports/2023_08_28_ProgressReport.md)

[README](../README.md)
```
#### Adding Titles
You can optionally add a title for a link. This will appear as a tooltip when the user **hovers over the link**. To add a title, enclose it in quotation marks after the URL.
```
My favorite search engine is [Duck Duck Go](https://duckduckgo.com "The best search engine for privacy").
```

#### URLs and emails
To quickly turn a URL or email address into a link, enclose it in angle brackets.
```
<https://www.markdownguide.org>
<fake@example.com>
```

#### Reference-Style Links
Reference-style links are a special kind of link that make URLs **easier to display and read in Markdown.**
```
In a hole in the ground there lived a hobbit. Not a nasty, dirty, wet hole, filled with the ends of worms and an oozy smell, nor yet a dry, bare, sandy hole with nothing in it to sit down on or to eat: it was a [hobbit-hole][1], and that means comfort.

[1]: <https://en.wikipedia.org/wiki/Hobbit#Lifestyle> "Hobbit lifestyles"
```


### Color
In issues, pull requests, and discussions, you can call out colors within a sentence by using backticks. A supported color model within backticks will display a visualization of the color.

```markdown
The background color is `#ffffff` for light mode and `#000000` for dark mode.
```

### Task Lists
Task lists (also referred to as _checklists_ and _todo_ lists) allow you to create a list of items with checkboxes. In Markdown applications that support task lists, checkboxes will be displayed next to the content. To create a task list, add dashes (`-`) and brackets with a space (`[ ]`) in front of task list items. To select a checkbox, add an `x` in between the brackets (`[x]`).

```
- [x] Write the press release
- [ ] Update the website
- [ ] Contact the media
```

### Local Image Resize
To resize the embedded image, add "|" and a number after the image file name. 
```
![[Pasted image 20230711203834.png|200]]
```
