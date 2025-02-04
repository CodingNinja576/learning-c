#include<stdio.h>
int main()
{int num;
  printf("please enter the no. which you want to check");
  scanf("%d",&num);
  for ( int i = 2 ; i < num ; i++)
  {
    if(num % i ==0)
    {
      printf("entered no. is not is not a prime no.");
      return 0;
    }
    
  
    
  }
  printf("enteered no is prime");
  

  

}