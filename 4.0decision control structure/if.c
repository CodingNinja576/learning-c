#include<stdio.h>
int main()
{ 
  int age ;
  printf("welcome to arto office\nplease enter your age");
  scanf("%d",&age);
  printf("your age is %d\n",age); 
  //we want to deliver message to those people who are above 18 that you are eligible for license
  if(age >= 18)     {
    
    printf("you are eligible for license. ");
    
  }

  return 0;
  }