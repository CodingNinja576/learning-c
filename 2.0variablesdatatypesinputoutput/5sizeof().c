#include<stdio.h>
void main()
{
  int integer;
  float decimal;
  double doub;
  char character;
  printf("size of int is %lu bytes \n", sizeof(integer));
  printf("size of float is %lu bytes\n ", sizeof(decimal));
  printf("size of int is %lu bytes \n", sizeof(doub));
  printf("size of int is %lu bytes\n ", sizeof(character));
  return  0;
}

