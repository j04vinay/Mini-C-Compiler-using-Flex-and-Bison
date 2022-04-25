#include <stdio.h>

int b[10];

int main()
{
    int a[10];
    // Correct array expression
    a[1] = b[1] + b[2];

    // Incorrect array index,exceeds dimensions
    a[9] = b[1];

    // Invalid array index
    b[2] = a[1];

    return 1;
}