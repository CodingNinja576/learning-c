#include<stdio.h>
int main()
{
  printf("Welcomes you to age groupcalculator");
  int age;
  printf("\ncould you please enter your age : ");
  scanf("%d",&age);
   if ( age <=13 )
  {
  printf(" you are child right now ");
  }
   if( age >13 && age <= 20 )
  {
  printf("you are teen ");
  }
  if( age >20 && age <= 60)
  { printf("right now you are an adult");
  }
  if(age > 60)
  {printf("buddha khadus");
  }

  return 0;


}