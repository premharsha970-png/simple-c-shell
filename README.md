# 🐚 MyShell

A simple, interactive command-line shell written in C from scratch.

![Shell Demo]([path/to/your/screenshot.png])

## 📖 Overview

MyShell is a custom Unix shell built in C that reads commands from the user, parses them, and executes them using system calls. It supports built-in commands, external program execution, and provides an interactive prompt with the current working directory.

This project was built as part of [Hack Club Stardance](https://stardance.hackclub.com) to learn system programming concepts like process creation, program execution, and command parsing.

## ✨ Features

- **Interactive prompt** showing the current working directory
- **Colored output** for a better visual experience (green prompt)
- **Command tokenization** — handles commands with multiple arguments
- **External command execution** via `fork()` + `execvp()`
- **Built-in commands:**
  - `exit` — Exit the shell
  - `cd <dir>` — Change directory
  - `pwd` — Print working directory
- **Error handling** for missing commands and invalid directories
- **Safe input handling** with `fgets()` (no buffer overflows)
- **Handles Ctrl+D** (EOF) gracefully

## 🛠️ How to Build

### Requirements
- GCC compiler
- Linux/Unix environment (uses POSIX system calls)

### Compile
```bash
gcc -Wall -Wextra -g -o myshell myshell.c
