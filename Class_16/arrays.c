/*
Arrays: an arry is a collection of variables of the same data type, stored in contiguous memory locations. 

syntax: 
data_type array_name[array_size]; 
*/

#include <stdio.h> 

int main() {
    int marks[5] = {85, 90, 78, 92, 88}; 

    printf("Student Marks:\n"); 
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1, marks[i]); 
    }

    return 0; 
}