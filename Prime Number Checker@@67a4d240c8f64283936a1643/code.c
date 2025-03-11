#include<stdio.h>

int prime(int);
int prime(int a){
    int is_prime = 1;
    for(int i=2; i*i<=a; i++){
        if(i%a==0){
            is_prime =0;
        }
    }
    if(is_prime){
        printf("1");
    }
    else{
        printf("0");
    }

}

int main(){
    int a;
    scanf("%d",&a);
    prime(int a);
    return 0;
}