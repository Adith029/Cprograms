#include <Stdio.h>
//sorted
int search(int arr[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if (arr[i] == key){
        return i;
    }}
    return -1;
    
}

int main(){
    int arr[]={1,9,3,7,5,10};
    int n= sizeof(arr)  /sizeof(arr[0]);
    int key=7;
    int find =search(arr,n,key);

    if (find==-1)
    {
        printf("Element Not found");
    }else
    printf("Element Found at %d ",find+1);
    return 0;
    
}