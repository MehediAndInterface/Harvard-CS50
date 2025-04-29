/*
A function is a block of code that performs a specific task. It helps break a program into smaller, manageable parts. 

syntax: 
return_type function_name(parameter1, parameter2,...) {
    // body of the function 
    return value; 
}
*/
#include <stdio.h>

// Function Declaration 
int add(int a, int b); 

// Main Function 
int main() {
    int sum = add(5, 3); 
    printf("Sum: %d\n", sum); 

    return 0; 
}

// Function Definition 
int add(int a, int b) {
    return a + b; 
}

/*
Why use function? 
- avoid code repetition 
- easier to debug and maintain 
- enables modular programming 
- improves code redability 
*/