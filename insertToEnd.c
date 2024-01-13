#include <stdio.h>

int insert(int key,int n,int arr[],int capacity){
    if(n>capacity)
    return n;
    arr[n]=key;
    return n+1;
}

int main() {
    int arr[20] = {1, 3, 5, 7, 9, 10};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n=6;
    int i,key = 9;
    printf(" Before Insertion:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    n=insert(key,n,arr,capacity);
    
     printf(" After Insertion:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
}
