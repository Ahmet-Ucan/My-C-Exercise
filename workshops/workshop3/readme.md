# C Programming: Relational & Logical Expressions (Workshop #3)

This repository contains two C console applications designed to demonstrate the use of appropriate data types, self-describing variable names, and complex relational and logical expressions

## 📂 Project Contents

### Part 1: Data Analysis & Boolean Logic (`w3p1.c`)
This program stores product information and evaluates various test scenarios using relational and logical expressions to produce TRUE (non-zero) or FALSE (zero) results.
* **Features:**
  * Utilizes unmodifiable `const` variables to guarantee data remains constant throughout the program's execution.
  * Calculates the average price of items and formats floating-point output to a precise 4 decimal places.
  * Evaluates complex boolean scenarios, such as checking if prices are within certain limits, comparing combinations of prices, and verifying if product IDs are unique.

### Part 2: Coffee Shop Simulator & Matching Algorithm (`w3p2.c`)
A coffee shop inventory simulator that reads product data, formats it into an aligned table, and matches available coffee products against specific user preferences.
* **Features:**
  * Stores data for three different coffee products using 15 distinct variables, applying strict self-describing naming conventions (e.g., `type1`, `grind1`, `weight1`).
  * Reads user preferences (coffee strength, cream, daily servings, and maker equipment) utilizing a maximum of 4 variables to optimize memory usage.
  * Implements a detailed matching logic algorithm using relational and logical operators to perfectly align user inputs with product features.
  * Performs inline mathematical conversions, including calculating pounds from grams using a defined `GRAMS_IN_LBS` constant.

## 🛠️ Technologies & Skills Demonstrated
* **Language:** C Programming Language
* **Data Types:** `int`, `double`, `char`
* **Operators:** Relational (`<`, `>`, `<=`, `>=`, `==`, `!=`) and Logical (`&&`, `||`)
* **Formatting:** Advanced `printf` table alignments and floating-point precision constraints (`%.4f`, `%6.3lf`, `%5.1lf`)

## 🚀 Compilation & Execution

To compile the projects with strict warning flags using the GCC compiler:

```bash
# For Part 1:
gcc -Wall -Werror w3p1.c -o prg_w3p1
./prg_w3p1

# For Part 2:
gcc -Wall -Werror w3p2.c -o prg_w3p2
./prg_w3p2
