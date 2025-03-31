#include<stdio.h>
int check(int arr[]);



int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int check(int arr[]){
    for(int i =0; i<n; i++)
    if(arr[0]>arr[n-1]){
        printf("Not Sorted");
        break;
    }
    else
    printf("Sorted");
    
    
}
    check(arr);
    return 0;
}