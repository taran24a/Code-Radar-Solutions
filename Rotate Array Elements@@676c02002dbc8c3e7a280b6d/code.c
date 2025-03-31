#include<stdio.h>
void rotate(int arr[], int si, int ed){
    for(int i =si,j=ed; i<j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",k);
    k = k%n;
    rotate(arr,0,n-1);
    rotate(arr,0,k-1);
    rotate(arr,k-1,n-1);
    for(int i =0; i<n; i++){
        printf("%d\n",arr[i]);

    }
    return 0;
}