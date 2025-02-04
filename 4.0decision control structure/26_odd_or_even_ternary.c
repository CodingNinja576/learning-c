#include<stdio.h>
int main()
{
  int num ;
  printf("Please enter your number :");
  scanf("%d" ,&num);
  num % 2 == 0 ? printf("even"): printf("odd");


/* 

ternary operator --->>  num % 2 == 0 ? printf("even"): printf("odd");

here -->> condtn ->>> (num % 2 == 0 ? )


if true statement 1 willl print as here -->> printf("even")

if false statement 2 willl print as here -->> printf("odd");

*/
}