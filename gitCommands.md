# Git Commands Reference

## Basic Git Configuration

```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
git config --global core.editor "vim"  # or your preferred editor
git config --global init.defaultBranch main
```

## Repository Setup

```bash
git init  # Initialize a new Git repository
git clone <repository-url>  # Clone an existing repository
```

## Staging and Committing

```bash
git status  # Check status of files
git add <file>  # Stage a specific file
git add .  # Stage all changes
git commit -m "Your commit message"  # Commit staged changes
git commit -am "Message"  # Add & commit tracked files in one step
```

## Branching

```bash
git branch  # List all branches
git branch <branch-name>  # Create a new branch
git checkout <branch-name>  # Switch to a branch
git checkout -b <branch-name>  # Create and switch to a new branch
git merge <branch-name>  # Merge a branch into current
```

## Remote Repositories

```bash
git remote -v  # View remotes
git remote add origin <url>  # Add remote repo

git push -u origin main  # Push to remote (set upstream)
git push  # Push changes
git pull  # Pull latest changes from remote
git fetch  # Fetch from remote (no merge)
```

## Viewing History

```bash
git log  # View commit history
git log --oneline --graph --decorate --all  # Pretty log
```

## Undoing Changes

```bash
git reset <file>  # Unstage a file
git checkout -- <file>  # Discard changes in a file
git revert <commit>  # Revert a specific commit
git reset --hard <commit>  # Reset to a specific commit (DANGEROUS)
```

## Tags

```bash
git tag  # List tags
git tag <tag-name>  # Create a new tag
git push origin <tag-name>  # Push a tag to remote
```

## Stash

```bash
git stash  # Stash changes
git stash list  # List stashes
git stash apply  # Reapply latest stash
git stash pop  # Apply and remove stash
```

## Submodules

```bash
git submodule add <repo-url> <path>  # Add submodule
git submodule update --init --recursive  # Init & update submodules
```

## Miscellaneous

```bash
git diff  # Show unstaged changes
git diff --cached  # Show staged changes
```

---

> Save this file and use it as a quick reference for your daily Git workflow.
