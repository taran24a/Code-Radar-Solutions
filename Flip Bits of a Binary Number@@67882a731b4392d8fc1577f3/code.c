#include <stdio.h>

int main() {
    int num, flipped;

    // Input number
    
    scanf("%d", &num);

    // Flip all bits using bitwise NOT (~)
    flipped = ~num;

    
    printf("%d\n", flipped);

    return 0;
}
