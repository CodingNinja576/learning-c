#include<stdio.h>
int main()
{
  char character;
  char *ptr = &character;
  printf("welcome to showcasing char pointers");
  printf("\nplease enter the character : ");
  scanf("%c",ptr);
  printf("\nvalue of character is %c ",*ptr);
  printf("\nvalue of character is %c ",character);



  return 0;
}