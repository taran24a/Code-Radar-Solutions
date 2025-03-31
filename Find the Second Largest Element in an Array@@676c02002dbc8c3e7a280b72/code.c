#include<stdio.h>

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
        
        if(*smax ==0)
        return -1;

        return *smax;
        
    }
    }

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    int  max = 0;
    int  smax = 0;

    for(int i =0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int result = check(arr,n,&smax,&max);
    
    printf("%d",result);
    return 0;
}