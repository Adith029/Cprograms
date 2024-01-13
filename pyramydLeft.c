#include <stdio.h>
int main(){
    int i,j,limit,k;
    printf("Enter :");
    scanf("%d",&limit);
    for ( i = 1; i <= limit; i++)
    {
        for(j=1;j<=limit;++j){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
           
           
        printf("\n");
        
    }
    return 0;
    
}