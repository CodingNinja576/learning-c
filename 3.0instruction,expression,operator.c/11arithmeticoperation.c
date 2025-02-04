#include<stdio.h>
int main()
{
  int num1,num2;
  printf("please enter value of first number");
  scanf("%d",&num1);
  printf("please enter the value of second number");
  scanf("%d",&num2);
  printf("sum of no's is %d\n",num1+num2);
  printf("diff. of no's is %d\n",num1-num2);
  printf("product of no's is %d\n",num1*num2);
  printf("division of no's gives %f\n",num1/num2);
  printf("on division we will get remainder %d",(num1%num2));
  return 0;
}
