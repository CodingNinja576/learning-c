#include<stdio.h>
#include<string.h>
int main()
{
  printf("Welcome to our login page :\n");
  char syspass[100]="Divyansh@123";
  char userpass[100];
  printf("Please enter your password :");
   scanf("%s",userpass)  ;                                                //     fgets(userpass,sizeof(userpass),stdin);  -->as it addd '\0' at end of string
  int result=strcmp(syspass,userpass);
  if(result == 0)
  {
    printf("\nGreat! password eneterd by you is correct");
  }
  else
  {
    printf("\nUmm! Password enetred by you is incorrect");
  }
}
