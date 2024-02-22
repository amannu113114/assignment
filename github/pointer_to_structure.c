#include <stdio.h>

// Define a structure
struct Point {
    int x;
    int y;
};

int main() {
    // Declare a structure variable
    struct Point myPoint;

    // Declare a pointer to a structure
    struct Point *ptr;

    // Assign the address of the structure variable to the pointer
    ptr = &myPoint;

    // Access members using the pointer
    ptr->x = 10;
    ptr->y = 20;

    // Access members using the structure variable
    printf("Coordinates using pointer: (%d, %d)\n", ptr->x, ptr->y);
    printf("Coordinates using structure variable: (%d, %d)\n", myPoint.x, myPoint.y);

    return 0;
}
