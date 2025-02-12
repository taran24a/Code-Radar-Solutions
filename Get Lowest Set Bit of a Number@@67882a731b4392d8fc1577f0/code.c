#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

     n = 1<<31;
    if(n==1){
        printf("1");
    }
    else
    printf("0");
    return 0;
}
