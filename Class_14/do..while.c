/*
do..while
- always executes the code block at least once, then checks the condition. 
- useful when the code must runt at least once, even if the condition is false initially. 

syntax: 
do {
    // code block to execute
} while (condition); 
*/

#include <stdio.h> 

int main() {
    int i = 1; 

    do {
        printf("%d\n", i); 
        i++; 
    } while (i <= 5); 

    return 0; 
}