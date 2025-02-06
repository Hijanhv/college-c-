# C Program Explanation and Fix: "Return Type of Main is Not Int"

## Original Code
```c
#include <conio.h>
#include <stdio.h>

void main() {
    printf("hello friend");
    getch();
}

Problem
The compiler shows a warning or error: "return type of main is not int".

Code Explanation
Components:
#include <conio.h>:

This header provides console input/output functions like getch().
Note: It is specific to certain compilers (e.g., Turbo C/C++) and may not be supported by modern compilers like GCC or Clang.
#include <stdio.h>:

Standard Input/Output library for functions like printf().
void main():

Declares the main function.
While void main() works on some older compilers, the standard signature is int main().
printf("hello friend");:

Prints "hello friend" to the console.
getch();:

Waits for a key press before exiting.
Why the Issue Occurs
Your code uses void main(), which is not compliant with modern C standards (e.g., C99 or later). Most modern compilers, like GCC, expect main to return an integer (int).


Explanation of Changes
1. int main()
The main function should return an integer (int), which indicates the program's exit status.
Returning 0 usually means the program executed successfully.
2. return 0;
Added at the end of the main function to comply with the standard.
Key Notes:
Modern Standards:
Use int main() for portability and compliance with modern compilers.
Alternative to getch():
Replace getch() with getchar() if your compiler does not support <conio.h>.