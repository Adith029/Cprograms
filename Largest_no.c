#include <stdio.h>
int main(){
  int firstNo,secondNo,thirdNo;
  printf("Enter First Number");
  scanf("%d",&firstNo);
  printf("Enter Second Number");
  scanf("%d",&secondNo);
  printf("Enter Third Number");
  scanf("%d",&thirdNo);
  
  if(firstNo>secondNo && firstNo>thirdNo){
      printf("Largest number is %d",firstNo);
      
  }
  else if(secondNo>thirdNo){
      printf("Largest number is %d",secondNo);
  }
  else{
      printf("Largest number is %d",thirdNo);
  }
  return 0;
  
}