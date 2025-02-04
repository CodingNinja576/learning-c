#include<stdio.h>
void main()
{
  int n;
  printf("enter n");
  scanf("%d",&n);
  printf(" 0\n");
  if (n>0)
    printf(" 1\n");
  }
  int prev = 0;
    int next = 1 ;
    int temp = (prev+next);
  while( temp <= n)
  {
    printf("%d\n" ,temp);
  
    prev = next;
    next = temp;
  }
}
