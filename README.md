📚 Student Database (C Programming Project)

This is a simple Student Database Management System written in C.
It demonstrates core C programming concepts including:

Structs

Arrays of structs

Pointers

Function arguments & prototypes

String handling (strcmp, scanf, etc.)

Sorting algorithms

Loops (for, do–while)

Switch-case menus

This project was built as a learning exercise to prepare for a C programming exam.

🚀 Features
✔ Add New Student

Prompts the user for:

Name

Age

GPA

Stores each new entry in an array of Students structs.

✔ Print All Students

Displays each student's:

Name

Age

GPA

Formats output neatly for readability.

✔ Search Student by Name

Uses strcmp() to compare the search input with names in the list.

✔ Sort Students by Name

Alphabetically sorts students using a bubble sort pattern and
strcmp() for string comparison.

✔ Sort Students by GPA

Sorts students from highest to lowest GPA.

✔ Menu-Driven Program

A clean do-while loop menu that repeats until the user selects Exit.

📌 How to Compile & Run
Using gcc:
gcc StudentDatabase.c -o StudentDatabase
./StudentDatabase

Or on Windows (MinGW):
gcc StudentDatabase.c -o StudentDatabase.exe
StudentDatabase.exe

📁 File Information

StudentDatabase.c — main source code

Contains:

Struct definition

Function prototypes & implementations

Menu-driven loop

Sorting/search functionality

🧠 What I Learned

How to create and use structs

Passing arrays and structs to functions

Pointer usage (int *count)

Why strings work differently (char name[30])

Sorting custom data types

Working with strcmp, scanf, and formatted printing

Designing modular code using multiple functions

🖥 Example Output
**************************Student Database**************************

(1)Add New Student
(2)Print All Students
(3)Search By Name
(4)Sort By Name
(5)Sort By GPA
(6)Exit
Select Option:

🤝 Contributing

This is a practice project — feel free to fork it or open issues if you want to extend the functionality.
