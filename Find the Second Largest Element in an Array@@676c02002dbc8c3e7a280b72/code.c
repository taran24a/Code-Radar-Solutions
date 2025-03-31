#include<stdio.h>
int check(int arr[]);
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    int max = 0;
    int smax = 0;

    for(int i =0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int check(arr[n]){
    for(int i = 0;i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>smax && arr[i]<max){
            smax = arr[i];
            return smax;
        }
        else 
        return -1;
        
    }
    }
    printf("%d",smax);
    return 0;
}