#include<stdio.h>
int main()
{int length,breadth;
  printf("welcome to rectangle perimeter calculator\n");
  printf("please enter length of rectangle:");
  scanf("%d",&length);
  printf("please enter breadth of rectangle");
  scanf("%d",&breadth);
  //arithmetic operation
  int perimeter=2*(length+breadth);
  printf("perimeter of rectangle is %d",perimeter);
  return 0;

}