#include<stdio.h>
int main()
{
  printf("welccome to table printer program\n");
  int num;
  printf("please enter the no. whose table you want ot get printed :");
  scanf("%d",&num);

  for ( int i = 1 ; i <= 100; i ++)
  {
    printf( "\n%d x %d = %d " , num , i ,num*i);
  }
  return 0;
}