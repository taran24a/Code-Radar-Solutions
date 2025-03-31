#include<stdio.h>


int check(int arr[],int n,int a){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1] && arr[i]> arr[i-1])
        a = arr[i];
        return a;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    check(arr);
    return 0;
}