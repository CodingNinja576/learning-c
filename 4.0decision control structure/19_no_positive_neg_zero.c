#include<stdio.h>
int main()
{
  int num;
  printf("please enter the number :");
  scanf("%d",&num);
  if(num >=1)  // or (num > 0)
  {
    printf("eneterd number is positive");
  }
  else if (num <= -1) // or (num < 0)
  {
    printf("entered number is negative");
  }
  else{
    printf("enetered num is zero");
  }
  return 0;
}