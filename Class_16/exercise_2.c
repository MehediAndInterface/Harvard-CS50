/*
Write a C program that:
- Declares an array to store marks of 5 students.
- Takes input from the user for each student's mark.
- Counts and displays the number of students who passed and failed.

Assumption: A student passes if their mark is greater than or equal to 40.

Requirements:
- Use an integer array of size 5.
- Use a loop to take input and count pass/fail.
- Display the count of passed and failed students.
*/

#include <stdio.h> 

int main() {
    int marks[5]; 
    int pass = 0;
    int fail = 0; 

    printf("Enter marks for 5 students:\n"); 

    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1); 
        scanf("%d", &marks[i]); 
        
        if (marks[i] >= 40) {
            pass++; 
        } else {
            fail++; 
        }
    }

    // Display results 
    printf("\nNumber of students passed: %d\n", pass); 
    printf("Number of students failed: %d\n", fail); 

    

    return 0; 
}