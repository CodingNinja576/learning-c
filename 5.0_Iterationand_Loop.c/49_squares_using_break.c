#include<stdio.h>
int main()
{
  printf("welcome to th worl of squares\n\n ");
  int num;
  while(1)
  {
    printf("please neter the no.\n");
    scanf("%d", &num);
    if (num == -1) break ;
    printf("the square of %d is %d ", num ,num*num);
  }
  printf("\nbye bye");
  return 0;
}