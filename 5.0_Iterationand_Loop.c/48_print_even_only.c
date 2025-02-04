#include<stdio.h>
int main()
{
  printf("welcome to even no. printer");
  int max;
  printf("please eneter the no. upto you wnat to get evenno. printed");
  scanf("%d", &max);

  for(int i = 2; i<=max; i++ )
  {
    
    if(i % 2 == 1 ) continue;
    printf("\n%d",i);
  }
  return 0;

  
}