#include<stdio.h>
int main()
{
  int a,b;
  printf("enter values of a and b\n");
  scanf("%d %d",&a,&b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("a=%d\nb=%d",a,b);
  return 0;
}