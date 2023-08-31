Link back to [README.md](../README.md)

---
# Sync between Obsidian and GitHub
To synchronize between *Obsidian* and *GitHub*, I tried two methods in success: 
## Method 1: Obsidian Git (HTTP on Mac)
Following [this guide](https://publish.obsidian.md/git-doc/Getting+Started), I got error messages like this one: 
[![Obsidian Git が認証エラーで使えない問題を解決する](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fkattsun.dev%2Fimg%2FPasted%2520image%252020210528092236.png&f=1&nofb=1&ipt=a5a6f1d0161e9b8509b8396e0a2635365ae32f8024316f4ddb041d84e2e372cb&ipo=images)](https://kattsun.dev/img/Pasted%20image%2020210528092236.png)

There seemed to be authentication problems in Git, which I had no clue of. After some digging on the internet, I generated a Token following [this guide](https://linked-blog-starter.vercel.app/connect-obsidian-vault-with-github), **and it worked**! 

==The current solution== is to generate a personal token in the *GitHub* settings and include it in the repository path like this: 
```
https://<PERSONAL_ACCESS_TOKEN>@github.com/<USERNAME>/<REPO>.git
```

### Miscellaneous
- For automatic backup, the number of *Vault backup interval* cannot be zero:

![Pasted_Image](_attachments/Pasted_image_20230830213813.png)

- To manually push changes, use either of the following commands:
```
obsidian git: commit
obsidian git: push
```
or
```
obsidian git: create backup
```

## Method 2: GitHub Desktop 
The easiest way is to stall [*GitHub Desktop*](https://desktop.github.com) and set the local folder inside an existing Obsidian Vault. The workflow will be as simple as this: 
1. Make changes in *Obsidian*
2. Review changes and commit in *GitHub Desktop*

However, for the **Simplicity** of having everything in one app (*Obsidian*), I later deleted *GitHub Desktop* and used the *Obsidian Git* Plugin method. 

Another disadvantage is when I create a backup for multiple file changes, I need to type notes to push, which can be annoying sometimes.  


---

# Markdown - the GitHub way
This section is about transferring previous markdown knowledge for *GitHub* use. 

See [here](resources/_GitHub_Favored_Markdown.md) for notes about the mixed use of the markdown language in *Obsidian* and *GitHub*.

Resources: 
- [GitHub Markdown Documentation](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github) - General guide for GitHub writing
- [Obsidian Markdown Guide](https://www.markdownguide.org/tools/obsidian/) - Use this to check which ones are available in *Obsidian*

---

# Computational Design


# Gravity Sketch Workflow
Learned new (*Industrial Design*) workflows from another designer. 

I may further develop this topic in another dedicated journal. 

1. **Physical Mockup**: Sketch in *Gravity Sketch* (ideation phase) -> clean up scenes -> export ideal forms -> 3D print separately
2. **Interactive Mockup**: Model in *Gravity Sketch* (development phase) -> export to *Unity Engine* -> add interactions

The *Physical Mockup* workflow is easier to adopt and has value for many traditional ID applications because it includes physical feedback. 

The *Interactive Mockup* seems more suitable for storyboards (user actions in context). **However, *ShapesXR* can be a better fit since it does not require coding.** 
