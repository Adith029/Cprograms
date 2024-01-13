#include<stdio.h>
void main(){
    int n;
    printf("Enter:");
    scanf("%d",&n);
    int myarray[n];
    for(int i=0;i<n;i++){
        scanf("%d",&myarray[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",myarray[i]);
    }
        
   
    
    return 0;
}