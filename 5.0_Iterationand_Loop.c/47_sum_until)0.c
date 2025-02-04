#include<stdio.h>
int main()
{
  printf("Welcome to user no summation :");
  int num;
  int sum = 0;
  do
  {
    printf("\nplease input the no:");
    scanf("%d",&num);
    if (num < 0  )  continue ;
    sum +=num; // agr continue chl jayega to yahan tak loop aayega hi nhi...
    

  } while (num != 0);  

  printf("sum of no. enteerd by you is %d",sum);

    

  

}