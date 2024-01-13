#include<stdio.h>
int main(){
    int limit,num,secondNo=0,thirdNo;
    printf("Enter the Limit:");
    scanf("%d",&limit);
        for (num= 0; num<limit; num++)
        {
            printf("%d,",num);
            thirdNo=num+secondNo;
            num=secondNo;
            secondNo=thirdNo;
        }
        return 0;
        
}