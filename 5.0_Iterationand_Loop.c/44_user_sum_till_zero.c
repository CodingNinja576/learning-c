#include<stdio.h>
int main()
{
  printf("Welcome to user no summation :");
  int num;
  int sum = 0;
  do
  {
    printf("\nplease input the no:");
    scanf("%d",&num);
    sum +=num;
    

  } while (num != 0);  // or we can use (num <0  || num> 0)

  printf("sum of no. enteerd by you is %d",sum);

    

  

}