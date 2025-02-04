#include<stdio.h>
int main()
{
  char c[50];
  printf("Please enter your name :\n ");
  scanf(" %49s",c);     //%49s means it specify boundary nesss of string so that it can't Buffer
  printf("Good Morning %s",c)  ;  // there is no need of &c


  return 0;
}