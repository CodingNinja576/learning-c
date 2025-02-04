#include<stdio.h>
int main()
{
  int num ;
  printf("Please enter your number :");
  scanf("%d" ,&num);
  if( num % 2 == 0)

  {
    printf("entered number is even");
  }
  else
  {
    printf("enetered number is odd");
  }
  return 0;

}