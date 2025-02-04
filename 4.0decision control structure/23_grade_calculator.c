#include<stdio.h>
int main()
{
  printf("Welcomes you to grade calculator");
  int marks;
  printf("\ncould you please enter your marks : ");
  scanf("%d",&marks);
   if ( marks >= 90)
  {
  printf("grade A ");
  }
  else if(marks <90 && marks >=75)
  {
  printf("grade b :");
  }
  else if(marks <75 && marks>=60)
  { printf("grade c");
  }
  else if(marks <60 && marks>=30)
  {printf("grade D");
  }
  else
  {printf("grade f :");
  }

  return 0;


}