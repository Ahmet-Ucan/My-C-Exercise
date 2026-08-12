# C Programming: Introduction to Standard Output (Workshop #1)

This repository contains two introductory C console applications. The projects focus on familiarizing developers with the Visual Studio Code Integrated Development Environment (IDE) and the GCC compiler.

## 📂 Project Contents

### Part 1: Basic Standard Output (`w1p1.c`)
* This program demonstrates the fundamental use of the `printf` function from the standard input/output (`stdio`) library.
* It outputs a formatted pledge letter, displaying basic text formatting and newline characters.

### Part 2: Escape Sequences and Formatting (`w1p2.c`)
* This program builds upon the first part by incorporating special escape sequences.
* It demonstrates the use of tab characters (`\t`) for text alignment.
* It properly outputs reserved characters such as backslashes (`\\`), percent signs (`%%`), and double quotes (`\"`) within the `printf` function.

## 🛠️ Technologies & Skills Demonstrated
* **Language:** C Programming Language
* **Core Concepts:** Standard output generation, string formatting, and escape sequences.
* **Tools:** Visual Studio Code (IDE) and GCC Compiler.
* **Theory:** Introduction to the Computational Thinking Approach, pseudo-code design, and Flow Chart problem-solving methodologies.

## 🚀 Compilation & Execution

To compile the projects using the GCC compiler with all warnings enabled (`-Wall`) and custom output names (`-o`):

```bash
# For Part 1:
gcc -Wall w1p1.c -o prg_w1p1
./prg_w1p1

# For Part 2:
gcc -Wall w1p2.c -o prg_w1p2
./prg_w1p2
