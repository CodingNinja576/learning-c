#include<stdio.h>
int main()
{
  int day;
  printf("please enter day of the week :");
  scanf("%d",&day);
  switch(day)
  {case 1: printf("monday");
  break;
  case 2: printf("tuesday");
  break;
  case 3: printf("wednesday");
  break;
  case 4: printf("thurday");
  break;
  case 5 : printf("friday");
  break ;
  case 6: printf("saturday");
  break;

  case 7 :  printf("sunday");
  break;
  default :
  printf("day entered is incorrect");
  }

  printf("\nday calculation complete");
  

return 0;
}
