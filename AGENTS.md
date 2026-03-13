# AGENTS.md

This file defines how the Codex agent should operate in this repository.

---

# Workspace

The project root is:

D:\code

The agent may only read and modify files inside this directory.

Do not access files outside this workspace.

---

# Available Tools

The agent may use the following MCP tools:

filesystem  
- Read and modify project files

context7  
- Look up real-world library usage and examples

openaiDocs  
- Retrieve official OpenAI API documentation

playwright  
- Perform browser automation and web inspection

github  
- Assist with repository workflows

---

# Working Style

Before making any changes:

1. Inspect the repository structure first.
2. Identify the relevant files.
3. Make minimal and targeted modifications.
4. Prefer modifying existing files rather than creating new ones.
5. Avoid large-scale refactors unless explicitly requested.

After making changes:

- Clearly list modified files.
- Explain the reason for the change.
- Suggest validation steps.

---

# Git Workflow

The repository uses Git for version control.

When changes are made:

1. Summarize modified files.
2. Generate a clear commit message.
3. Wait for user confirmation before committing.

Do NOT automatically run:

git commit

unless explicitly instructed.

Prefer small, focused commits.

---

# Commit Message Format

Use conventional commit style.

Format:

type(scope): short description

Examples:

feat(api): add request validation  
fix(parser): handle empty input case  
docs(readme): update installation guide  
refactor(core): simplify initialization logic  
chore(repo): update dependencies  

Allowed types:

feat  
fix  
docs  
refactor  
test  
chore

---

# GitHub Workflow

If the repository is connected to GitHub:

1. Suggest branch names before making large changes.
2. Do not push changes automatically.
3. Suggest pull request descriptions when appropriate.

Example branch names:

feature/add-auth-handler  
fix/memory-leak-parser  
docs/update-readme

---

# Safety Rules

Never run destructive Git commands automatically.

Forbidden unless explicitly requested:

git reset --hard  
git clean -fd  
git rebase -i  
git push --force  

Always confirm with the user before rewriting history.

---

# Validation

After modifying code:

1. Suggest how to validate the change.
2. Provide exact commands when possible.
3. Only run safe commands.

Examples:

Python project  
python main.py  

Node project  
npm install  
npm test  

C++ project  
g++ main.cpp -o main.exe  
.\main.exe  

If the project involves hardware (embedded systems):

Do NOT attempt to flash firmware or interact with hardware automatically.

---

# Code Style

Follow these principles:

- Keep code simple and readable
- Do not modify unrelated code
- Preserve existing architecture
- Add comments only when helpful

When fixing bugs:

Explain the root cause briefly.

---

# Agent Behavior

The agent should behave as a cautious engineering assistant.

Preferred workflow:

Understand project  
→ inspect files  
→ implement minimal fix  
→ summarize changes  
→ propose commit message  
→ suggest validation

# Auto Dev Loop

The agent should follow an iterative engineering workflow whenever possible.

Preferred loop:

1. Inspect the repository structure
2. Identify the relevant files
3. Make a minimal, targeted change
4. Validate the result with a safe command when possible
5. If validation fails, inspect the error and apply a minimal follow-up fix
6. Summarize the final changes
7. Propose a commit message

---

## Execution Policy

The agent may run safe, local, non-destructive commands for validation.

Allowed examples:

- python main.py
- pytest
- npm test
- npm run build
- npx tsc --noEmit
- g++ main.cpp -o main.exe
- .\main.exe

The agent should prefer read-only or validation-oriented commands.

The agent must NOT automatically run:

- deployment commands
- flashing commands
- production database commands
- system configuration commands
- destructive shell commands

---

## Error Handling

If a validation command fails:

1. Read the error output carefully
2. Explain the likely root cause briefly
3. Apply the smallest reasonable fix
4. Re-run validation if safe
5. Stop after a reasonable number of attempts and report status clearly

Do not loop endlessly.

---

## Change Scope Rules

When implementing fixes:

- prefer the smallest viable change
- avoid rewriting unrelated modules
- preserve existing structure and naming
- avoid creating new files unless necessary

For larger refactors, explain the plan before editing.

---

## Completion Format

After completing a task, report in this format:

### Summary
- what was changed
- why it was changed

### Modified Files
- list of modified files

### Validation
- command run, or command recommended
- whether validation passed or failed

### Suggested Commit Message
- one conventional commit message

## Project-Type Rules

For Python projects:
- prefer python and pytest based validation

For Node.js projects:
- prefer npm test, npm run build, or npm run lint

For C++ projects:
- use simple local compile commands when the build process is obvious
- avoid inventing complex build systems unless already present

For embedded or hardware-related projects:
- do not attempt flashing, hardware communication, or device control
- only modify source files and describe manual validation steps