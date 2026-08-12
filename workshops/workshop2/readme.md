# C Programming: Computations & Data Types (Workshop #2)

This repository contains two C console applications focused on fundamental data types, arithmetic operators, type casting, and output formatting precision[cite: 5]. The projects simulate a retail shopping environment 
to demonstrate how to handle monetary calculations accurately in C.

## 📂 Project Contents

### Part 1: Shopping Cart & Data Type Casting (`w2p1.c`)
This program takes user input for shirt prices and calculates the sub-total, taxes, and overall total for a customer's shopping cart.
* **Features:**
  * Mitigates floating-point rounding errors and data loss by converting monetary values into cents (integers) for internal calculations.
  * Utilizes casting operators (promotion and narrowing) to safely switch between `double` and `int` types.
  * Formats numeric output with precise decimal limitations (e.g., displaying exactly two decimal places for prices).

### Part 2: Formatted Reporting & Coin Denomination Calculator (`w2p2.c`)
An expansion of the first program to process multiple customers (Patty, Tommy, and Sally) and generate detailed, aligned financial reports.
* **Features:**
  * Generates a formatted retail table detailing Customer, Size, Price, Quantity, Sub-Total, Tax, and Total using advanced string formatting in `printf`.
  * Implements a coin denomination algorithm that calculates how a balance can be represented by Canadian coins (Toonies, Loonies, Quarters, Dimes, Nickels, and Pennies) using division logic.
  * Computes the average cost per shirt for both tax-exclusive and tax-inclusive totals.

## 🛠️ Technologies & Skills Demonstrated
* **Language:** C Programming Language
* **Data Types:** `int`, `double`, `float`, `char`
* **Core Concepts:** 
  * Type Promotion and Narrowing (Truncation)
  * Mathematical operations and rounding strategies (e.g., adding `0.5` before casting to `int` for accurate rounding)
* **Formatting:** Advanced `printf` table alignments and precision constraints (e.g., `%9.4lf`, `%.2f`)

## 🚀 Compilation & Execution

To compile the projects with strict warning flags using the GCC compiler:

```bash
# For Part 1:
gcc -Wall -Werror w2p1.c -o prg_w2p1
./prg_w2p1

# For Part 2:
gcc -Wall -Werror w2p2.c -o prg_w2p2
./prg_w2p2
