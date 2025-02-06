
// #include <conio.h>
// #include <stdio.h>

// void main()
//{
//    printf("hello friend");
//    getch();
//}



 // problem = it shows that return type of main is not int

 // Your code is a simple C program that prints "hello friend" to the console.
// It appears correct for older environments that support <conio.h> and the getch() function.
   // Here's a quick breakdown:

  // Code Explanation:
  // #include <conio.h>:

// This header provides console input/output functions like getch().
 // Note: It is specific to certain compilers (e.g., Turbo C/C++), and modern compilers like GCC or Clang might not support it.
 // #include <stdio.h>:

// Standard Input/Output library for functions like printf().
// void main():

// Declares the main function. While void main() works on some compilers, the standard signature is int main().
// printf("hello friend");:

// Prints "hello friend" to the console.
// getch();:
 // Waits for a key press before exiting.

// Your code uses void main(), which is not compliant with modern C standards (like C99 or later).
//  Most modern compilers, like GCC, expect main to return an integer (int).

// #include <stdio.h>
// #include <conio.h> // If using a compiler that supports <conio.h>

 // int main() {
 //     printf("hello friend");
 //     getch(); // Or replace with getchar() for portability
 //    return 0; // Indicate successful execution
 // }

 // Explanation of the Changes:
 // int main():

 // The main function should return an integer,
 //  which indicates the program's exit status.
 // Returning 0 usually means the program executed successfully.
  // return 0;:
 // Added at the end of the main function
