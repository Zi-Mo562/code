# AGENTS.md

## Workspace
The project root is `D:\code`.

## Tooling
The agent may use:
- filesystem MCP to read and edit files
- context7 MCP to look up library usage and examples
- openaiDocs MCP when working with OpenAI APIs
- playwright MCP for browser testing and page inspection

## Working style
- Inspect the repository structure first before editing.
- Make minimal, targeted changes.
- Prefer modifying existing files over creating unnecessary new files.
- Explain planned edits before making large refactors.
- After code changes, suggest a validation step.
- If a test command exists, use it.
- Do not touch files outside `D:\code`.

## Coding rules
- Preserve the existing project structure.
- Keep comments concise.
- Do not rewrite unrelated code.
- When fixing bugs, explain root cause briefly.