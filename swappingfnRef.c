#include<stdio.h>
 int swap(int *a,int*b);
void main(){
    int a,b;
    printf("Enter A=,B=:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    return 0;
}
int swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("A=%d\nB=%d",*a,*b);

}