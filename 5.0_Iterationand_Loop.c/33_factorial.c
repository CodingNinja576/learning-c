#include<stdio.h>
int main()

{
  printf("Welcome to the world of factorial");
  int num;
  printf("\nPlease enter the number whose factorial you want to calculate : ");
  scanf("%d",&num);

  int i = 1 ; 
  int fact = 1 ; //fact declare krna pdega jahan hmey fact ki value store krani hai program no. 32 and 33 are likely same
  while ( i <=num)
  {
    fact *= i ;    // iska mtlb haio factorial = factorial x i and here i value 1 se suru hogi and then num tk jayegi...
    i++;  
  }
  printf("factorial of %d is %d", num ,fact);
  return 0; 
}