// 1. Statements and Semicolons
// Every instruction in C is a statement.
// Each statement ends with a semicolon ;.
// This tells the compiler where one instruction ends and another begins.

// preprocessor directive: Tells the compiler to include the Standard Input Output header file, which contains the printf() function.
#include <stdio.h>

int main() {
    int num1 = 10; 
    int num2 = 5; 

    int sum = num1 + num2; 

    printf("The sum of %d and %d is: %d\n", num1, num2, sum); 

    return 0; 
}
