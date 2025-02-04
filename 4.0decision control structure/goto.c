#include<stdio.h>
int main()
{
  int num;
  input_number: //label for goto
  printf("please enter the number :");
  scanf("%d",&num);
  if (num != 10)
  { goto input_number;

  } /*goto is generally discouraged*/

  return 0;
   
}