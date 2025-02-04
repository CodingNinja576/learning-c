#include<stdio.h>
#include<string.h>
int main()
{
  const char EXIT[20]="exit";
  char text[20];
 
  
  do
  {
     printf("PLease enter text : ");
     scanf("%s", text);
     if(strcmp(text,EXIT) ==0)
     {
      break ;
     }
    
  } while (strcmp(text,EXIT) !=0);
  
    
  printf("\n\nAccess Granted");
  
  return 0;
  
}

