#include <stdio.h>
int main(){
    int num,limit;
printf("Enter");
scanf("%d",&limit);

for(num=0;num<=limit;num++){
    if(num==5){
        break;
    }
    printf("%d\n",num);
}
return 0;

}