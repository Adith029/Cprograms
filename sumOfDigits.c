#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the Number:");
    scanf("%d",&num);
    int temp=num;
    while (num!=0)
    {
        int rem=num%10;
        num=num/10;
        sum+=rem;
    }
    printf("Sum = %d",sum);
    

return 0;

}