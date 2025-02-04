#include<stdio.h>
int main()
{
  // this program will calculate sum of all odd numbers from 1 to specified non 'N ' taken from user 
  int num ;
  printf("enter the no. upto you want to calculate the sum:");
  scanf("%d",&num);
  int i=1;
  int sum =0;
   
   while(i<= num)
   {
    sum +=i;   // sum = sum + i 
    i += 2;    // i = i+2   -->command for odd no's
    
   }
    
    printf("sum of odd no'sfrom 1 upto %d is %d " ,num , sum );

  //printf("welcome to odd sum.c");
  //printf("\nplease enetr a no. upto which you want to calculate the sum");
 // scanf("%d",num);

  /* 
  int sum = 0;
  for ( i=1 ; i<=num ; i+=2)
   
  {
     sum += i;
    
  }
  printf("sum of odd no's from 1 upto %d is %d " ,num , sum ");
  */
}