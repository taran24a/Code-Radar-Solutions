// Your code here...#include <stdio.h>

int main() {
    int num, flipped;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Flip all bits using bitwise NOT (~)
    flipped = ~num;

    // Output result
    printf("Original number: %d\n", num);
    printf("After flipping all bits: %d\n", flipped);

    return 0;
}
