# 🔁 Git Workflow Flowchart (Mermaid)

```mermaid
graph TD
  A[Clone Repository] --> B[Create a Branch]
  B --> C[Make Changes]
  C --> D[Stage Changes (git add)]
  D --> E[Commit Changes (git commit)]
  E --> F[Push to Remote (git push)]
  F --> G[Create Pull Request]
  G --> H{Code Review}
  H -- Approved --> I[Merge to Main]
  I --> J[Pull Latest (git pull)]
  H -- Needs Fixes --> C
```
