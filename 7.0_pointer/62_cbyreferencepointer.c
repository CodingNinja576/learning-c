#include<stdio.h>
void min_max(int*,int*,int*,int*);
int main()
{
  int first,second,min,max;
  printf("welcome to finding min and max\n");
  printf("please enter the first number :\n");
  scanf("%d",&first);
  printf("please enter the second number : ");
  scanf("%d",&second);
  min_max(&first,&second,&min,&max);
 printf(" maximum no. between %d and %d is %d and min is %d",first,second,max,min);
  return 0;

  



}
void min_max(int *a,int *b,int *min,int *max)
{if(*a>*b)
{
*max>=*a;
*min=*b;
}
else
{
  *max=*b;
  *min=*a;
}
}


