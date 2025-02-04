#include<stdio.h>
int main()
//prime no. are those no .which have only two divisor one and themself too. eg. 2,3,5,7....
{
  printf("welcome to prime or not\n");
  int num;
  printf("please input the number :");
  scanf("%d",&num);

  for(int i =2 ; i < num ; i++)
  {
    if(num % i == 0)
    {
      printf("enetred no. is not prime ");
      return 0 ; // yahan break nhi use krengey
    }
  }
printf("entered %d is prime ", num);
}


