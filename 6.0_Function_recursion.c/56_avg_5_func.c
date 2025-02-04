#include<stdio.h>
float avg(int,int,int,int,int);
int main()
{
  int a,b,c,d,e;
  printf("please enter the value of a,b,c,d,e\n");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  printf("average of following no.'s is %d",avg(a,b,c,d,e));
  return 0;
}
float avg( int a,int b,int c,int d, int e)
{
 float average = (a+b+c+d+e)/5;
  return average;
}