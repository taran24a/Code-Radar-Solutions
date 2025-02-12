#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int num = 1<<31;
    if(num==1){
        printf("1");
    }
    else
    printf("0");
    return 0;
}
