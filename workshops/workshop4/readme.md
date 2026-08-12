# C Programming: Loops & Control Structures (Workshop #4)

This repository contains two different console applications developed to demonstrate a strong understanding of flow control, input validation, and loop structures in C programming. 

The projects feature algorithmic approaches that are crash-proof against invalid user inputs and maintain the system in a safe state until the correct data is received.

## 📂 Project Contents

### Part 1: Loop Type Simulator (`w4p1.c`)
A program that simulates iterations by taking a loop type (`do-while`, `while`, `for`) and the desired number of iterations from the user.
* **Features:**
  * Strict input validation that only accepts specific characters (`D`, `W`, `F`, `Q`).
  * Logical filters constructed using De Morgan's laws.
  * Edge-case handling (enforcing the requirement for the number of iterations to be strictly between 3 and 20).
  * Memory optimization (developed under a strict constraint of using a maximum of 2 `int` and 1 `char` variables).

### Part 2: Grocery Shopping Simulator (`w4p2.c`)
A two-phase shopping simulation where the user first determines a requirement list and then navigates the aisles to pick these items. It features a robust error-handling architecture conceptually similar to sensor/target reading loops often used in embedded systems.
* **Features:**
  * **Phase 1 (Requirement Planning):** Nested loop structures for 5 different products where negative inputs are instantly rejected.
  * **Phase 2 (Picking):** Dynamic decision mechanisms (`if - else if - else`) that accurately respond when insufficient, excessive, or the exact amount of required items are picked.
  * A continuous Main Loop architecture that allows the program to reset itself and start over until the user explicitly chooses to exit.

## 🛠️ Technologies & Skills Demonstrated
* **Language:** C Programming Language
* **Control Structures:** `do-while`, `while`, `for`, `if-else`
* **Logical Operators:** `&&` (AND), `||` (OR), `!` (NOT)
* **Core Concepts:** Input Validation, Error Handling, State Management, Memory Constraint Compliance

## 🚀 Compilation & Execution

To compile the projects with strict warning flags using the GCC compiler:

```bash
# For Part 1:
gcc -Wall -Werror w4p1.c -o prg_w4p1
./prg_w4p1

# For Part 2:
gcc -Wall -Werror w4p2.c -o prg_w4p2
./prg_w4p2
