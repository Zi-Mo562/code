# LeetCode Solutions

This project is organized for studying LeetCode Hot 100 by topic, while keeping the repository clean for GitHub sync.

## Recommended structure

```text
leetcode-solutions/
|-- README.md
|-- .gitignore
|-- hot100/
|   |-- INDEX.md
|   |-- 01-array/
|   |-- 02-hash/
|   |-- 03-two-pointers/
|   |-- 04-sliding-window/
|   |-- 05-stack-queue/
|   |-- 06-linked-list/
|   |-- 07-binary-tree/
|   |-- 08-graph/
|   |-- 09-backtracking/
|   |-- 10-binary-search/
|   |-- 11-heap/
|   |-- 12-greedy/
|   |-- 13-dp/
|   |-- 14-matrix/
|   `-- 15-bit-manipulation/
|-- notes/
`-- templates/
```

## How to save each problem

For each problem, create a folder under the matching topic:

```text
hot100/02-hash/0001-two-sum/
|-- README.md
|-- solution.py
`-- solution.cpp
```

Suggested `README.md` contents for each problem:

- problem link
- core idea
- time complexity
- space complexity
- mistakes or review notes

## Topic order

1. Array
2. Hash
3. Two Pointers
4. Sliding Window
5. Stack / Queue
6. Linked List
7. Binary Tree
8. Graph
9. Backtracking
10. Binary Search
11. Heap
12. Greedy
13. Dynamic Programming
14. Matrix
15. Bit Manipulation

See `hot100/INDEX.md` for the recommended study index and check list.

## GitHub workflow

```bash
git init
git add .
git commit -m "feat(repo): initialize leetcode hot100 structure"
git branch -M main
git remote add origin <your-github-repo-url>
git push -u origin main
```
