#include<stdio.h>
int main()
{
  char day[10];
  char month[15];
  int year;
  printf("Please enter current day:\n");
  scanf("%s",day);
  printf("Please enter current month:\n");
  scanf("%s",month);
  printf("Please enter current year:\n");
  scanf("%d",&year);

  printf("\nThe current date is : %s.%s.%0.4d",day,month,year);



  return 0;
}