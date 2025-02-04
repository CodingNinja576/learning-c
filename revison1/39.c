#include<stdio.h>
void main()
{
  int num;
  printf("please enter the no. upto which you want to get fibonacci series printed");
  scanf("%d",&num);
  printf(" 0");
  if(num>0)
  {
    printf(" 1");
  }
  int prev = 0;
  int next = 1;
  while(prev+next<=num)
  {
    int temp = prev+next;
    printf(" %d",temp);
    prev = next;
    next =temp;
  }
}
