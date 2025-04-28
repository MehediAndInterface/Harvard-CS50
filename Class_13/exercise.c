/*
Write a C program to check if a person is:

- A child if age < 13
- A teenager if 13 ≤ age ≤ 19
- An adult if age > 19
*/

#include <stdio.h> 

int main() {
    int age; 
    printf("Enter your age: "); 
    scanf("%d", &age); 

    if (age < 13) {
        printf("You are a Child.\n"); 
    } else if (age <= 19) {
        printf("You are a Teenager\n"); 
    } else {
        printf("You are an adult.\n"); 
    }

    return 0; 
}