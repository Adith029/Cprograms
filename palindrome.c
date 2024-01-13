#include <stdio.h>
int main(){
    int num,reversed=0;
    printf("Enter the Number:");
    scanf("%d",&num);
    int temp=num;
    while (num!=0)
    {
        int rem=num%10;
        num=num/10;
        reversed=reversed*10+rem;
        
    }
    if (temp==reversed)
    {
        printf("Is Palindrome");
    }else{
    printf("not Palindrome");
    }
    
    
    

return 0;

}