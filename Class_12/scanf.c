/*
The format specifiers for scanf are similar to those for printf, but with some important nuances:

%d or %i: Reads a signed integer.
%u: Reads an unsigned integer.
%f: Reads a floating-point number (float).
%lf: Reads a double (important difference from printf).
%c: Reads a single character. Be careful with whitespace; it will read the next character, even if it's a space, tab, or newline. Use a space before %c in the format string (e.g., " %c") to skip leading whitespace.
%s: Reads a sequence of non-whitespace characters into a character array. Important: You need to ensure that the character array you provide is large enough to hold the input string plus the null terminator (\0). scanf does not perform bounds checking, which can lead to buffer overflows if the input is too long.
%p: Reads a pointer value (in a format written by %p in printf).
*/

#include <stdio.h> 

int main() {
    int age; 

    printf("Enter you age: "); 
    scanf("%d", &age); 
    printf("You are: %d\n", age); 

    return 0; 
}