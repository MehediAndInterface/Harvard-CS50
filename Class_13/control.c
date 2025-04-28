/*
if - checks a condition. if it's true, it runs a block of code. 
if (condition) {
    // code runs if condition is true 
}

else - if the 'if' is false, it runs another block of code. 
if (condition) {
    // code if condition is ture
} else {
    // code if condition is false 
}

else if - tests another condition if the first 'if' is false. 
if (condition1) {
    // code if condition1 is ture
} else if (condition2) {
    // code if condition2 is true 
} else {
    // code if none of the above are ture 
}
*/

#include <stdio.h>

int main() {
    int number; 
    printf("Enter a number: "); 
    scanf("%d", &number); 

    if (number > 0) {
        printf("The number is positive.\n"); 
    } else if (number < 0) {
        printf("The number is negative.\n"); 
    } else {
        printf("The number is zero.\n"); 
    }

    return 0; 
}

