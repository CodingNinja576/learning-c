#include<stdio.h>
int main()
{
  char name[50];
  //printf("Please enter your name :\n");
  //gets(name);   //uding gets() is unsafe
  //printf("Good morning %s \n " ,name);
  //puts(name);

  printf("now enter your nick name : ");
  fgets(name,sizeof(name),stdin);
  printf("Good morning ");
  puts(name);
  

  return 0;
}
