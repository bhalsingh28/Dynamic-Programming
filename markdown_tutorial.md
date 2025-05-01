# 🧾 Markdown (.md) Tutorial — Beginner Friendly

Markdown is a lightweight markup language used to format text using a plain-text editor. GitHub, VS Code, Obsidian, Jupyter, and many other tools support it.

---

## 📌 1. Headers

Use `#` for headings (like HTML's `<h1>` to `<h6>`)

```markdown
# H1 - Main Title

## H2 - Subsection

### H3 - Smaller Section
```

---

## ✍️ 2. Text Formatting

```markdown
**Bold text**
_Italic text_
~~Strikethrough~~
`Inline code`
```

- **Bold**
- _Italic_
- ~~Strikethrough~~
- `Inline code`

---

## 🔗 3. Links

```markdown
[Link Text](https://example.com)
```

Example:
[GitHub](https://github.com)

---

## 🖼 4. Images

```markdown
![Alt Text](image_url_or_relative_path)
```

Example:

```markdown
![My Flowchart](images/flowchart.png)
```

---

## 📋 5. Lists

### Unordered List

```markdown
- Item 1
- Item 2
  - Sub-item
```

### Ordered List

```markdown
1. First
2. Second
3. Third
```

---

## 📐 6. Code Blocks

\`\`\`python
def hello():
print("Hello, Markdown!")
\`\`\`

⬆️ Use triple backticks (```) with the language name for syntax highlighting.

---

## ➕ 7. Blockquotes & Horizontal Rules

```markdown
> This is a blockquote.
```

> This is a blockquote.

```markdown
---
```

---

## 📊 8. Tables

```markdown
| Name  | Score |
| ----- | ----- |
| Alice | 95    |
| Bob   | 88    |
```

| Name  | Score |
| ----- | ----- |
| Alice | 95    |
| Bob   | 88    |

---

## 📌 9. Table of Contents (GitHub Style)

To link to a section:

```markdown
[Go to DP Section](#dynamic-programming)
```

This works only if a matching header exists:

```markdown
## Dynamic Programming
```

---

## 🔁 10. Collapsible Sections (GitHub Only)

```markdown
<details>
<summary>Click to expand</summary>

Hidden content here.

</details>
```

<details>
<summary>Click to expand</summary>

Hidden content here.

</details>

---

## 🧠 Bonus: Mermaid Diagrams (GitHub & Obsidian)

For flowcharts:

\`\`\`mermaid
graph TD
A[Start] --> B{Decision}
B -->|Yes| C[Action 1]
B -->|No| D[Action 2]
\`\`\`
