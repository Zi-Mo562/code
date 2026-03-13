# AGENTS.md

This file defines how the Codex agent should behave when working in this repository.

---

# Workspace

Project root:

D:\code

The agent may only read or modify files within this directory.

Never access files outside the workspace.

---

# Available MCP Tools

The agent may use the following MCP tools:

filesystem  
- read project files
- modify files
- create files when necessary

context7  
- search real-world library usage
- retrieve modern example code

openaiDocs  
- retrieve official OpenAI API documentation

playwright  
- browser automation
- inspect webpages
- capture screenshots

github  
- assist with repository workflows

---

# Working Style

Before making any changes:

1. Inspect the repository structure.
2. Identify the relevant files.
3. Understand existing logic.
4. Prefer minimal modifications.

After making changes:

- Clearly list modified files
- Explain the reason for the change
- Suggest validation steps

Avoid unnecessary refactoring.

Prefer modifying existing files over creating new ones.

---

# Git Workflow

The repository uses Git for version control.

When changes are made:

1. Summarize the modifications.
2. List all changed files.
3. Generate a commit message.
4. Wait for user confirmation before committing.

Do NOT automatically run:

git commit

unless the user explicitly asks for it.

Prefer small, focused commits.

---

# Commit Message Format

Use conventional commit style.

Format:

type(scope): short description

Examples:

feat(api): add request validation  
fix(parser): handle empty input case  
docs(readme): improve installation instructions  
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

1. Suggest branch names before major changes
2. Do not push automatically
3. Suggest pull request descriptions when appropriate

Example branch names:

feature/add-auth-handler  
fix/null-pointer-parser  
docs/update-readme

---

# Safety Rules

Never run destructive Git commands automatically.

Forbidden unless explicitly requested:

git reset --hard  
git clean -fd  
git rebase -i  
git push --force  

Always confirm before rewriting history.

---

# Auto Dev Loop

When solving problems, the agent should follow this engineering loop:

1. Inspect repository structure
2. Identify relevant files
3. Apply minimal change
4. Validate change
5. If validation fails, analyze error
6. Apply minimal follow-up fix
7. Summarize final changes
8. Suggest commit message

Avoid endless loops.

Stop after a reasonable number of attempts.

---

# Validation Policy

The agent may run safe validation commands.

Allowed examples:

Python

python main.py  
pytest  

Node.js

npm install  
npm test  
npm run build  

C++

g++ main.cpp -o main.exe  
.\main.exe  

Prefer non-destructive commands.

Never run:

deployment commands  
database migrations  
system configuration commands  

without user confirmation.

---

# Project Type Rules

Python projects:

- prefer pytest validation

Node projects:

- prefer npm test or npm run build

C++ projects:

- use simple compile commands when possible
- do not invent complex build systems

Embedded / hardware projects:

- do not attempt firmware flashing
- do not interact with hardware
- only modify source files
- suggest manual validation

---

# Code Style

Follow these principles:

- preserve project structure
- keep changes minimal
- avoid modifying unrelated code
- write clear code

When fixing bugs:

- explain root cause briefly

---

# Completion Format

After completing work, report in this format:

Summary  
- description of change

Modified Files  
- list of files changed

Validation  
- command used or recommended

Suggested Commit Message  
- one conventional commit message

# Skill Selection

When analyzing a repository:
use skills/analyze_project.md

When fixing bugs:
use skills/bug_fix.md

When reviewing code quality:
use skills/code_review.md

When improving code structure:
use skills/refactor.md

When creating tests:
use skills/generate_tests.md

When preparing a pull request:
use skills/create_pr.md