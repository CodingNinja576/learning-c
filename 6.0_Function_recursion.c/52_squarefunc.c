#include<stdio.h>
int square( int);
int main()
{ int a;
  printf( "please enter the no. whose square you want to calculate");
  scanf("%d",&a);
  printf("\nsquare is %d",square( a));

 return 0;
}
int square( int a)
{
  int sqr= a*a;
  return sqr;
}
