# AGENTS.md

## Scope
- Workspace root: `D:\code`
- Only read or modify files inside this workspace

## Tools
- Available MCP tools: `filesystem`, `context7`, `openaiDocs`, `playwright`, `github`
- Use the simplest tool that fits the task

## Workflow
1. Inspect repository structure
2. Identify relevant files
3. Understand existing logic
4. Apply minimal changes
5. Validate safely
6. Summarize changes and suggest a commit message

## Editing Rules
- Prefer modifying existing files over creating new ones
- Avoid unnecessary refactoring
- Keep changes minimal and focused
- Avoid unrelated modifications
- Explain root cause briefly when fixing bugs

## Git Rules
- Do not run `git commit` unless explicitly requested
- Do not push automatically
- Prefer small, focused commits
- Use conventional commits: `type(scope): short description`

## Safety
Require user confirmation before:
- destructive Git commands
- force push
- history rewriting
- deployment commands
- database migrations
- system configuration changes

## Validation
- Prefer safe, non-destructive validation
- Python: `pytest`
- Node.js: `npm test` or `npm run build`
- C++: simple compile/run commands
- Embedded/hardware: source changes only, no flashing

## Completion Format
Summary
- description of change

Modified Files
- list of files changed

Validation
- command used or recommended

Suggested Commit Message
- one conventional commit message

## Skill Selection
- Analyze repository: `skills/analyze_project.md`
- Fix bugs: `skills/bug_fix.md`
- Review code: `skills/code_review.md`
- Refactor: `skills/refactor.md`
- Generate tests: `skills/generate_tests.md`
- Prepare PR: `skills/create_pr.md`