#include <stdio.h>

int zeros(int num){
    if(num == 0){
        return 32;

    }

    int count = 0;
    for(int i = 32; i >=0; i--){
        if(num &(1<<i)){
            break;
            count++;
        }
    }
    return count;

}


int main() {
    int num;
    scanf("%d",&num);

    int z = zeros(num);
    printf("%d",z);
   
    return 0;
}