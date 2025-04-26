// printf: formatted output 

/*
Some common format specifiers include:

%d or %i: Used for signed integers (e.g., int).
%u: Used for unsigned integers (e.g., unsigned int).
%f: Used for floating-point numbers (e.g., float, double).
%lf: Used for double (when reading with scanf, but %f usually works for printing).
%c: Used for single characters (e.g., char).
%s: Used for strings (null-terminated character arrays).
%p: Used for pointers (displays the memory address).
%%: Used to print a literal percent sign (%).
*/

#include <stdio.h> 

int main() {
    int age = 30; 
    float height = 1.75; 
    char initial = "J"; 
    char name[] = "John Doe"; 


    printf("My name is %s and I am %d years old.\n", name, age); 
    printf("My height is %.2f meters.\n", height); 
    printf("My initial is %c.\n", initial); 
    printf("The value of pi is approximately %f\n", 3.14159);
    printf("To print a percent sign, use %%. \n", 50); 

    return 0; 
}