#include<stdio.h>


int check(int arr[],int n){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1] && arr[i]> arr[i-1])
        
        return arr[i];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[i];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    check(arr);
    return 0;
}