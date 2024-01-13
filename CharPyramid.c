#include <stdio.h>

int main() {
    int limit, i, j;
    
    

    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i=1;i<=limit;i++){
    char ch='A';
        
        for(j=1;j<=i;j++){
           printf("%c ",ch);
             ch++;
        }
        printf("\n");
    }
   

    return 0;
}
