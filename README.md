# Understanding Operators and Conditional Statements in C++

**Name:** Akshit Chordia  
**PRN:** 24070123008  
**Division:** ENTC-A1  
**Title:** Operators and Conditional Logic in C++  
**Tools Used:** Visual Studio Code  

---

## Overview

This part of the C++ foundational project covers the use of **operators** and **conditional statements**. These tools form the building blocks of logic and decision-making in C++ programs. Through hands-on practice, this module focuses on applying these elements to real-world style problems such as grading systems, number evaluation, and coordinate quadrant detection.

---

## Types of Operators Used

### 1. Arithmetic Operators

Arithmetic operators are used to perform basic mathematical calculations.

- `+` : Addition  
- `-` : Subtraction  
- `*` : Multiplication  
- `/` : Division  

**Usage Example:**  
Used to compute the total and average marks of five subjects.

---

### 2. Relational (Comparison) Operators

These operators compare values and return either `true` or `false`.

- `==` : Equal to  
- `!=` : Not equal to  
- `<` : Less than  
- `>` : Greater than  
- `<=` : Less than or equal to  
- `>=` : Greater than or equal to  

**Usage Example:**  
Used to determine which grade bracket the average marks fall under.

---

### 3. Logical Operators

Logical operators are used when multiple conditions need to be evaluated together.

- `&&` : Logical AND  
- `||` : Logical OR  
- `!` : Logical NOT  

**Usage Example:**  
Used in coordinate-based quadrant detection where both `x` and `y` need to be checked together.

---

### 4. Assignment Operator

- `=` : Assigns a value to a variable.  

**Usage Example:**  
```cpp
average = (m1 + m2 + m3 + m4 + m5) / 5;
Conditional Statements in C++
Conditional statements allow the program to make decisions and execute code based on conditions.

if

else if

else

Usage Example:
Used to determine grades, identify if a number is positive/negative/zero, or to detect a point’s location in a Cartesian plane.

Summary of Programs
1. Grade Calculator
Calculates the average marks from five subjects and assigns a grade based on the score.

Sample Output:
Enter marks of subject 1: 56  
Enter marks of subject 2: 78  
Enter marks of subject 3: 98  
Enter marks of subject 4: 65  
Enter marks of subject 5: 45  
Average: 68.4  
The grade is: C

Key Concepts:

Arithmetic operations

Average calculation

Multiple if-else conditions

Use of relational and logical operators

2. Positive, Negative or Zero Checker
Checks whether the input number is positive, negative, or zero using conditional logic.

Sample Output:
Enter a number: -98  
The number is negative

Key Concepts:

Simple condition checking

Use of if-else

Comparison operators

3. Quadrant Finder
Determines which quadrant a given point lies in based on its x and y coordinates.

Sample Output:
Value of x is: -12  
Value of y is: -12  
(x, y) is in 3rd Quadrant

Key Concepts:

Use of compound conditions (&&)

Handling special cases (origin, axes)

Logical reasoning through real-world geometry

Conclusion
This module improved my understanding of decision-making in programming using operators and conditional statements. Writing logic-based programs like grading systems and coordinate analyzers helped me strengthen my foundation in control structures. These exercises play a vital role in shaping a programmer’s ability to write intelligent and dynamic code.
