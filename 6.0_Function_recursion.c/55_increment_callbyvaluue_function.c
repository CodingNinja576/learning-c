#include<stdio.h>
int increment(int);
int main()
{
  int num;
  printf("welcome to showing call by value\n");
  printf("please enter no. whose increment you want to calculate\n");
  scanf("%d",&num);
  printf(" before:value of num is %d\n",num);
  increment(num);
  printf("\n after value of num is %d",num);


    
  return 0;
}
int increment(int a)
{
  printf(" in function before:value of num is %d\n",a);
  a++;
  
  printf("in functionm after value of num is %d",a);
  

}