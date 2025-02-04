#include<stdio.h>
void main()
{
  int num;
  printf("please enter the no. whose factorial you want to calculate");
  scanf("%d",&num);
  int fact = 1;
  for ( int i = 1; i <=num ;i++)
  {
    fact*=i;
  }
   printf("factorial of %d is %d ",num,fact);
}