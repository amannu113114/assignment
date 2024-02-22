#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5];  // Pointer to an array of 5 integers

    ptr = &arr;  // Assign the address of the array to the pointer

    // Accessing elements using the pointer
    printf("First element: %d\n", (*ptr)[0]);
    printf("Second element: %d\n", (*ptr)[1]);

    return 0;
}
