#include<stdio.h>
int add( int , int ,int ,int);
int main()
{
  
  
  printf("sum is \n%d " , add( 1,2,3,4));
  printf("sum is\n%d " , add( 1,21,34,46));
  printf("sum is \n%d " , add( 145,2225,6530,45));
  return 0;

}
int add( int a , int b ,int c, int d)
{
  int sum = a+b+c+d;
  return sum;
}