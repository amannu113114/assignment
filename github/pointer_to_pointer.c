#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;        // Pointer to an integer
    int **ptr_to_ptr = &ptr; // Pointer to a pointer to an integer

    printf("Original value: %d\n", **ptr_to_ptr);

    // Incrementing the pointer to the pointer
    (*ptr_to_ptr)++; 

    // Accessing the new value
    printf("New value: %d\n", **ptr_to_ptr);

    return 0;
}
