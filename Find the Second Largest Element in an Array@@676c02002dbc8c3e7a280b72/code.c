#include<stdio.h>
#include<limits.h>

    int check( int arr[],int n,int *smax,int  *max){
    for(int i = 0;i<n; i++){
        if(arr[i]> *max){
           *max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]> *smax && arr[i]< *max){
            *smax = arr[i];
            
        }
    }
        if(*smax == INT_MIN){
        return -1;
        }
        return *smax;
        
    }
    

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    int  max = INT_MIN;
    int  smax = INT_MIN;

    for(int i =0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int result = check(arr,n,&smax,&max);
    
    printf("%d",result);
    return 0;
}