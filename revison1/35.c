#include<stdio.h>
void main()
{
  int first , second ;
  printf("please enter the valuue of first and second number whose lcmm you want to calculate");
  scanf("%d %d",&first ,&second);
  int min = first > second ? first : second;
  int max = first*second;
  for(int i = min ; i<= max ; i++)
  {
    if( i % first == 0 && i % second == 0)
    {
      printf("lcm of first and second is %d", i);
      break;
    }
  }
  
  

}