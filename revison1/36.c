#include<stdio.h>
void main()
{
  int first , second ;
  printf("please enter the valuue of first and second number whose hcf you want to calculate");
  scanf("%d %d",&first ,&second);
  int min = first < second ? first : second;
  
  for(int i = min ; i>=1 ; i--)
  {
    if( first % i  == 0 && second % i == 0)
    {
      printf("hcf of first and second is %d", i);
      break;
    }
  }
  
  

}