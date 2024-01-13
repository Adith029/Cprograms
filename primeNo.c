#include <stdio.h>

int main() {
    int limit, i, j, isPrime;

    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i=1;i<=limit;i++){
        isPrime=0;
        for(j=1;j<=limit;j++){
            if(i%j==0)
                isPrime++;
        }
            if(isPrime==2)
                printf("%d",i);
            
        
    }
    

    return 0;
}
