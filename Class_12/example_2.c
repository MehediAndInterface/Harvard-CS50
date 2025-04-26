// Example 2: Take a name and age, then display them.

#include <stdio.h>

int main() {
    char name[50]; 
    int age; 

    printf("Enter your name: "); 
    scanf("%s", name); // no & needed for arrays 
    printf("Enter your age: "); 
    scanf("%d", &age); 
    printf("Hello %s, you are %d years old!\n", name, age); 

    return 0; 
}