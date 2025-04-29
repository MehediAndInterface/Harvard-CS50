/*
Write a function called multiply() that takes two integers and returns their product. Call it from main() and print the result.
*/

#include <stdio.h>

int multiply(int a, int b); 

int main() {
    int a; 
    int b; 
    printf("Enter first number: \n"); 
    scanf("%d", &a);
    
    printf("Enter second number: \n"); 
    scanf("%d", &b); 
    

    int mul = multiply(a, b); 
    printf("Multiply: %d\n", mul); 

    return 0; 
}

int multiply(int a, int b) {
    return a * b; 
}

