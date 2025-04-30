/*
Write a C program that:
1. Declares an array to store marks of 5 students.
2. Takes input from the user for each student's mark.
3. Calculates and prints the total and average of the marks.
*/

#include <stdio.h> 

int main() {
    int marks[5]; 
    int total = 0; 
    float average; 

    printf("Enter marks for 5 students:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1); 
        scanf("%d", &marks[i]); 
        total += marks[i]; 
    }

    average = total / 5.0; 

    printf("\nTotal Marks = %d\n", total); 
    printf("Average Marks = %.2f\n", average); 

    return 0; 
}