#include <stdio.h>



int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    int shift = a<<b;
    printf("%d",shift);
    return 0;
}