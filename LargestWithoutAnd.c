#include <stdio.h>
int main(){
  int firstNo,secondNo,thirdNo,largeNo;
  printf("Enter First Number");
  scanf("%d",&firstNo);
  printf("Enter Second Number");
  scanf("%d",&secondNo);
  printf("Enter Third Number");
  scanf("%d",&thirdNo);
  
  if (firstNo>secondNo)
  {
    largeNo=firstNo;
    if (firstNo>thirdNo)
    {
        largeNo=firstNo;
    }
    else{
       largeNo=thirdNo;
    }
    
  }
  else{
    if (secondNo>thirdNo)
    {
        largeNo=secondNo;
    }
    else{
        largeNo=thirdNo;
    }
    
  }
  printf("Largest number is %d",largeNo);
   return 0;
  
}