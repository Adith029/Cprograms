#include <stdio.h>

int main()
{
int a;
printf("Enter:");
scanf("%d",&a);
if(a>=80 && a<=100){
    printf("A");
}
else if(a>=60 && a<80)
{
    printf("B");
}

else if(a>=40 && a<60)
{
    printf("C");
}
else if(a>=20 && a<40)
{
    printf("D");
}
else 
{
    printf("Failed");
}

return 0;
}

