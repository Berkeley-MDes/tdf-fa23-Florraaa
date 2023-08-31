Link back to [README.md](../README.md)

---
# Sync between Obsidian and GitHub
To synchronize between *Obsidian* and *GitHub*, I tried two methods in success: 
## Method 1: Obsidian Git (HTTP on Mac)
Following [*Obsidian Git* documentation](https://publish.obsidian.md/git-doc/Getting+Started), I got error messages like this one: 

![Device not configured](https://kattsun.dev/img/Pasted%20image%2020210528092236.png)

There seemed to be authentication problems in Git, which I had no clue of. 

### Solutions
The current solution is to  [generate a personal token](https://linked-blog-starter.vercel.app/connect-obsidian-vault-with-github) in the *GitHub* settings and include it in the repository path like this: 
```
https://<PERSONAL_ACCESS_TOKEN>@github.com/<USERNAME>/<REPO>.git
```

There is [another solution](https://kattsun.dev/posts/2021-05-28-obsidian-git-authentication-error/) that does not use tokens. After typing this command in the terminal (Mac), choose "always allow."

```
git config --global credential.helper osxkeychain
```

### Backup
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
The easiest way is to stall [*GitHub Desktop*](https://desktop.github.com) and set the local folder inside an existing Obsidian Vault. The workflow will be: 
1. Make changes in *Obsidian*
2. Review changes
3. Commit and push in *GitHub Desktop*
4. Multiple changes will require manual input of "Summary."

However, for the **Simplicity** of having everything in one app (*Obsidian*), I later deleted *GitHub Desktop* and used the *Obsidian Git* Plugin method. 

---

# Markdown - the GitHub way
This section is about transferring previous markdown knowledge for *GitHub* use. 

See [here](../resources/_GitHub_Favored_Markdown.md) for notes about the mixed use of the markdown language in *Obsidian* and *GitHub*.

Resources: 
- [GitHub Markdown Documentation](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github) - General guide for GitHub writing
- [Obsidian Markdown Guide](https://www.markdownguide.org/tools/obsidian/) - Use this to check which ones are available in *Obsidian*

---

# Computational Design


---
# Gravity Sketch Workflow
Learned new (*Industrial Design*) workflows from another designer. 

I may further develop this topic in another dedicated journal. 

1. **Physical Mockup**: Sketch in *Gravity Sketch* (ideation phase) -> clean up scenes -> export ideal forms -> 3D print separately
2. **Interactive Mockup**: Model in *Gravity Sketch* (development phase) -> export to *Unity Engine* -> add interactions

The *Physical Mockup* workflow is easier to adopt and has value for many traditional ID applications because it includes physical feedback. 

The *Interactive Mockup* seems more suitable for storyboards (user actions in context). **However, *ShapesXR* can be a better fit since it does not require coding.** 
