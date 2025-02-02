#include <stdio.h>

void decimal(int a){
    if(a==0){
        printf("0");
        return;
    }


int mask = 1<<32;
int start = 0;

for(; mask >0; mask >>= 1){
    if(a &mask){
        start = 1;
        printf("1");

    }
    else if(start){
        printf("0");
    }
}
}
int main() {
   int a;
   scanf("%d",&a);
   printf("%d", decimal(a));

    return 0;
}