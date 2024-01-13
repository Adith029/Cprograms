#include<stdio.h>
int area();
void main(){
printf("%d",area());
    return 0;
}

int area(){
int a,result;
printf("Enter:");
scanf("%d",&a);
result=a*a;
return result;
}