#include<stdio.h>
int main ()
{
  //this program is for printing table of a given no.
  int num ,i ;
  printf("Welcome to table printer\n");
  printf("please enter the no. whose table you want to print : ");
  scanf("%d",&num);

  for (i =1 ; i<=100 ; i++)
  {
    printf("\n%d x %d = %d ",num,i,num*i);
  }

  /* if you want to print your table with the help of 'while ' loop statement :

  int i =1 ;
  while ( i<=10)
  { printf("%d x %d = %d ", num,i,num*i);

    i++  // most important command
  }

  */
return 0;

}