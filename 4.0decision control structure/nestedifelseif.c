#include<stdio.h>
int main()
{
  int age;
  char is_indian;
  printf("welcome to arto office\nplease enter you age\n");
  scanf("%d",&age);
  printf("are you indian: (Y/N) ");
  scanf(" %c",&is_indian);
  /*YAAD RAKNA CHARACTER KO COMPAREA 
  KRATEY HUE ' 'USE KRTEY HAIN*/
  if (is_indian == 'Y') 
  {

    if ( age < 18)
     { printf("you are too young for licnse");
    
    }
     else if ( age > 70)
    {
    printf("sorry you are senior citizen now");
    }
    else
    {
    printf("congratulations you are eligible");
    }
  }
  else 
  {
    printf("you are not indian service is for indian national");
  }
  }
  

