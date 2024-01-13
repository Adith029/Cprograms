#include <stdio.h>
int main(){
    int num,result=0;
    printf("Enter the Number:");
    scanf("%d",&num);
    int originalNO=num;
    while (num!=0)
    {   
       int reminder= num%10;
       result+=reminder*reminder*reminder;
       num=num/10;
       
    }
    if (result==originalNO)
    {
        printf("Is Amstrong");
    }else{
        printf("not Amstrong");
    }
    

    return 0;

}