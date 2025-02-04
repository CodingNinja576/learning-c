#include<stdio.h>
long factorial(int);
int main()
  { printf("'welccome to factorial calculator");
  int num;
printf("please enter the no. whose factorial you want to calculate");
scanf("%d",&num);
long result = factorial(num);
printf("factorial of given nom is %ld", result);

      return 0;
  }
long factorial(int num)
{
  if (num <=1 ) 
  {
  return 1 ;
  }
  return num*factorial(num -1);
  
}