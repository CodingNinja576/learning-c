#include<stdio.h>
void main()
{
  int num;
  printf("give no.");
  scanf("%d",&num);
  int digit = 0;
  int sum = 0;
  int copy = num;
  while(copy>0)
  {
    digit=copy%10;
    sum+=(digit*digit*digit);
    copy /= 10;
    
  }
  printf("%d",sum);
}