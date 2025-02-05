#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // Assume the number is prime initially

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers must be greater than 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;  // Exit the program early
    }

    // Check divisibility from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {  // If divisible, it's not prime
            isPrime = 0;
            break;
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
