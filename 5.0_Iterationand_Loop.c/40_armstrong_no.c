#include<stdio.h>
int main()
{
  printf("welcome to armstrong no checker");
  int num;
  printf("please enter the number: ");
  scanf("%d",&num);
  int sum = 0;
  int copy = num;
  while(copy>0){
    int digit = copy % 10;
    sum += digit*digit*digit;
    copy /= 10;
  }
if (sum == num ){
  printf("the no. %d is angstrom no.",num);}
  else
  {
    printf("the no. you have enetered is not an angstrom no.");

  }


}