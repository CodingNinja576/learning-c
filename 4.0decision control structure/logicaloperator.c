#include<stdio.h>


int main() 



{
   int age;  
  char is_indian;
  printf("welcome to arto office\nplease enter you age\n");
  scanf("%d",&age);
  printf("  are you indian: (Y/N) ");
  scanf(" %c",&is_indian);
  if ( is_indian == 'Y' || (age >=18 && age<70))
  {
    printf("you are eligible for license");
  }
  else{
    printf("you are not eligible for license.");
  }



  }
  

