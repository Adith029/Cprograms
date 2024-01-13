#include<stdio.h>
 int factorial();
void main(){
    factorial();
    return 0;
}
int factorial(){
    int i,limit,fact=1;
    printf("Enter:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        fact*=i;
    }
    printf("%d!=%d",limit,fact);
    

}