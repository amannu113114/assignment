#include <stdio.h>

int main() {
    // Declare a string
    char myString[] = "Hello, World!";

    // Declare a pointer to a string and initialize it with the address of the first character
    char *ptrToString = myString;

    // Access and print characters using the pointer
    while (*ptrToString != '\0') {
        printf("%c", *ptrToString);
        ptrToString++; // Move the pointer to the next character
    }

    return 0;
}
