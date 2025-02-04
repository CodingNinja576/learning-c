#include<stdio.h>
void main()
{
  int num ;
  printf("please enter the no. upto you want to get printed sum off odd no.");
  scanf("%d",&num);
  int sum = 0; 
  for(int i = 1 ; i<=num ; i+=2)
  {
    sum+=i;
    
  }
  printf("sum of odd no. upto %d is %d",num,sum);

}