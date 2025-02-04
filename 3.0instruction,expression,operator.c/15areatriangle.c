#include<stdio.h>
int main()
{
  printf("welcome to triangle area calculator\n");
  int B,H;
  printf("enter base:");
  scanf("%d",&B);
  printf("enter height:");
  scanf("%d",&H);
  float area =0.5*B*H;
printf("area of desired triangle is %F",area);
return 0;

}