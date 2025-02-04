#include<stdio.h>
int main()

{
  int a,b,c;
  printf("please enter the value of a :");
  scanf("%d",&a);
  printf("please enter the value of b :");
  scanf("%d",&b);
  printf("please enter the value of c :");
  scanf("%d",&c);

  if ( a > b && a > c)
  {
    printf("a is greatest among all");
  }
  else if ( b >a && b> c)   //yaad rakhna yahan else if use krna hai
  {
     printf("b is greatest among all the numbers");

  }
  else
  {
    printf("c is greatest among all the given no's");
  }
    printf("\nwe have succesfully finded the greatest no among them");
    return 0;
  }
  