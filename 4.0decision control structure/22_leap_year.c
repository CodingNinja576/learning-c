#include<stdio.h>
int main()
{
  printf("Welcome to leap year finder\n");
  int year;
  printf("Could you please enter which year you want to check : ");
  scanf("%d",&year);
  
      if ( year % 4 ==0 && year % 100 != 0)
      {
      printf("entered year is leap year");
      }

      else if((year % 4 == 0) && year % 100 == 0 && year % 400 ==0 )
      {
      printf("entered year is leap year");
      } 
      else
      {
       printf("entered year is not leap year");
      }

      /* at last ag tumey  koi condition smjh na  ayey to tum ye wali condn use kr lena ki
      if ( year % 400  == 0 || year % 4 = 0 && year % 100 != 0)
      */
       
    
}