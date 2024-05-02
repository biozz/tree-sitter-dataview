# tree-sitter-dataview

This is a [Tree-sitter](https://tree-sitter.github.io) grammar for [Obsidian DataView](https://blacksmithgu.github.io/obsidian-dataview) query language.

The goal of the project is to make it possible to use DataView inside NeoVim. This is a very ambitious goal and tree-sitter grammar is only a little part of it.

Tree-sitter grammar for DataView will provide:

- syntax highlighting in markdown blocks
- an abstraction layer for parsing, which can be used in JavaScript, TypeScript, Python, C, Go, Rust, etc.

There is also `example` folder which contains an implementation of a «DataView Playground». I call it playground, becuase I would like to run DataView queries in the browser and see the output, since there is no good way to display query results inside NeoVim.

## Current state

We are in a deep WIP state. Not much stuff is working. There is a lot to do in terms of compatibility.

Overall, there are 3 main topics:

- compatibility with the DataView DQL
- highlighting
- playground

## Compatibility

This is a work-in-progress project. Please see compatibility matrix below.

| Feature                        | Status | Comment                  |
|--------------------------------|--------|--------------------------|
| **Keywords**                   | -      |                          |
| - `LIST`                       | ✅     |                          |
| - `TASK`                       | ✅     |                          |
| - `TABLE`                      | ✅     |                          |
| - `CALENDAR`                   | ✅     |                          |
| - `WHERE`                      | ✅     |                          |
| - `FROM`                       | ✅     |                          |
| - `SORT`                       | 🏗     | basic sort with one term |
| - `GROUP BY`                   | ❌     |                          |
| - `FLATTEN`                    | ❌     |                          |
| - `WITHOUT ID`                 | ✅     |                          |
| - `ASC`                        | ✅     |                          |
| - `DESC`                       | ✅     |                          |
| - `ASCENDING`                  | ❌     |                          |
| - `DESCENDING`                 | ❌     |                          |
| - `AND`                        | ❌     |                          |
| - `OR`                         | ❌     |                          |
| - `AS`                         | ✅     |                          |
| **Expressions**                | -      |                          |
| - parenthesis precedence       | ❌     |                          |
| - `AND`/`OR` combinations      | ❌     |                          |
| - arithmetic                   | ❌     |                          |
| - comparison                   | ❌     |                          |
| **Literals**                   | -      |                          |
| - number                       | ❌     |                          |
| - text                         | ❌     |                          |
| - boolean                      | ❌     |                          |
| - link                         | ❌     |                          |
| - list                         | ❌     |                          |
| - object                       | ❌     |                          |
| - date                         | ❌     |                          |
| - duration                     | ❌     |                          |
| **Functions**                  | -      |                          |
| - `something(arg1, arg2, ...)` | ❌     |                          |
