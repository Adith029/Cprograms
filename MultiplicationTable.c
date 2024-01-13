#include <stdio.h>
int main(){
  int a,i;
  printf("Enter:");
  scanf("%d",&a);
  
  
  for(int i=0;i<=10;i++){
     printf("%d x %d = %d\n",a,i,a*i); 
  }
     return 0;
  
}