#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    // Declare a pointer to a function that takes two ints as parameters and returns an int
    int (*ptrToFunction)(int, int);

    // Assign the address of the add function to the pointer
    ptrToFunction = &add;

    // Call the function through the pointer
    int result = (*ptrToFunction)(3, 4);

    // Alternatively, you can call the function using just the pointer without dereferencing
    // int result = ptrToFunction(3, 4);

    printf("Result: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
