#include<stdio.h>
int main()
{
  printf("welcome to number writer");
  int num = 1; // initialization
  while ( num <=100) // condition
  { printf("\n%d",num);
  num = num +1 ;  //updation    
  //or num += 1//or num++;

  }

  //for back counting 
  printf("\n1st lopp has ended");

  int num2 = 100;
  while (num2>=1)

  {
    printf("\n%d",num2);
    num2--;
  }
printf("\n2nd loop has ended");
  return 0 ;
}