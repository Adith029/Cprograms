#include<stdio.h>
int main(){
    int i=0,j=0;
    int arr[4][3]={{1,2,3},{8,9,0},{3,4,5},{3,2,1}};
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
        }
    }
    return 0;
}