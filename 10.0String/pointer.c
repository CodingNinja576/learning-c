#include<stdio.h>
int main()
{
  char name[50] = "Hello Divyansh";
  printf("Before modifying : ");
  puts(name);
  name[6]='d';
   printf("after modifying : ");
   puts(name);

   
   char *nick_name="Dipanshu";
   printf("Before modifying : ");
   puts(nick_name);
   nick_name[3] ='A';
   printf("after modifying : ",nick_name);
   
}