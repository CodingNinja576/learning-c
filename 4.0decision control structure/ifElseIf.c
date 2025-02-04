#include<stdio.h>
int main()
{
  int age;
  printf("welcome to arto office\nplease enter you age");
  scanf("%d",&age);

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
  

