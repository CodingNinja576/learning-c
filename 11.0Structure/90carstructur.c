#include<stdio.h>
struct Car
{
  char make[25];
  char model[25];
  int year;
  char color[25];
  };
  
int main()
{
  typedef struct Car Car;
  return 0;

}