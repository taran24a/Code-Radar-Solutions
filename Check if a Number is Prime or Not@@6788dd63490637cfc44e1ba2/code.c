#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // Assume the number is prime initially

    
   
    scanf("%d", &num);

    // Prime numbers must be greater than 1
    if (num <= 1) {
     

    // Check divisibility from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {  // If divisible, it's not prime
            isPrime = 0;
            break;
        }
    }
    }

    // Output result
    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
