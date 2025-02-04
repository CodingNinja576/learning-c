#include<stdio.h>
int main()
{
  printf("welcome to prime tester number\n");
  int num;
  printf("please input the number :");
  scanf(" %d",&num);
  
  int i =2 ;
  while(i<num)
  {
    if(num % i == 0)
    {
      printf("the no. eneterd by you is not prime no.");
      return 0;

    }
    i++; // beta tu ye condition bhool gya tha abhi

  }
  printf("the number entered by you is prime");


}