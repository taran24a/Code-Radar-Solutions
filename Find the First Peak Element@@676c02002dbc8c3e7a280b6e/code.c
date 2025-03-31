#include<stdio.h>


int check(int arr[],int n){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1] && arr[i]> arr[i-1]){
        
        return arr[i];
        }
    }
    return arr[i];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int result = check(arr,n);
    if(result != -1){
        printf("%d",result);
    }
    else
    printf("%d",-1);
    return 0;
}