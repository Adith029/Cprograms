#include <stdio.h>
int main(){
    int i,j,limit,k;
    printf("Enter :");
    scanf("%d",&limit);
    for ( i = 1; i <= limit; i++)
    {
        for(j=1;j<=i;j++){
            printf("*");
        }
           
           
        printf("\n");
        
    }
    return 0;
    
}