/*
Write a C program to print even numbers from 2 to 10 using all three loops.
*/

#include <stdio.h>

int main() {
    int i;

    printf("Using for loop:\n"); 
    for (i = 2; i <= 10; i += 2) {
        printf("%d ", i); 
    }
    printf("\n\n"); 

    printf("Using while loop:\n"); 
    i = 2; 
    while (i <= 10) {
        printf("%d ", i);
        i += 2;  
    }
    printf("\n\n"); 

    printf("Using do-while loop:\n"); 

    i = 2; 
    do {
        printf("%d ", i); 
        i += 2; 
    } while (i <= 10); 
    printf("\n\n"); 

    return 0;
}
