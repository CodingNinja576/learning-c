#include<stdio.h>
#include<string.h>
int main()
{
  const char passkey[20]="Divyansh@123";
  char password[20];
 
  
  do
  {
     printf("PLease enter correct password : ");
     scanf("%s", password);
    
  } while (strcmp(password,passkey) !=0);
    
  printf("\n\nAccess Granted");
  
  return 0;
  
}

