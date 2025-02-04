#include<stdio.h>
int main()
/* ternary operator is important*/
{
  printf("Here we will find minimum of two number");
  int num1,num2;
  printf("\nplease enter num 1:");
  scanf("%d",&num1);
  printf("please enter num2:");
  scanf("%d",&num2);
  num1 > num2 ? num1>num2 : num2>num1 ;
  /* or int min = num1 < num 2? num1 : num2 ye bhi use kr sktey hain */
}