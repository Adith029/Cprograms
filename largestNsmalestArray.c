// Program to print largest and smallest elements in an array
#include<stdio.h>
void main(){
    int n,i;
    printf("Enter:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largestArr=arr[0];
    int smallestArray=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largestArr){
            largestArr=arr[i];
        }else
        smallestArray=arr[i];
    }
    printf("Largest=%d",largestArr);
    printf("Smallest=%d",smallestArray);
    return 0;
}