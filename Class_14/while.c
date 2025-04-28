/*
while
- used when you don't know exactly how many times to loop beforehand. 
- it checks the condition first, then executes the block. 

syntax: 
while(condition) {
    // code block to execute 
}
*/

#include <stdio.h> 

int main() {
    int i = 1; 
    while(i <= 5) {
        printf("%d\n", i); 
        i++; 
    }
    return 0; 
}


