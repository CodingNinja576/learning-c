#include<stdio.h>
int main()
{
  char name[25];
  printf("please enter your full name :\n");
  fgets(name,25,stdin);
  printf("Welcome! ");
  puts(name);

  return 0;


}