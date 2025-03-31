#include<stdio.h>


int check(int arr[],int n){

    int max = arr[0]; int count = 0;
    for(int i =0; i<n; i++){
        if(max>arr[0]){
            max = arr[i];
            count++;
        }
        if(count>1){
            return -1;
        }
        else
        return arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1] && arr[i]> arr[i-1]){
        
        return arr[i];
        }
    }
    return arr[n-1];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int result = check(arr,n);
    
        printf("%d",result);
        return 0;
    }

    
   