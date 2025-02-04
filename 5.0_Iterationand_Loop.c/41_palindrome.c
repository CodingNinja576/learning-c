#include<stdio.h>
int main()

{
  printf("welcome to palindrome checker :");
  int num;
  printf("\nplease enter the no. you want to check : ");
  scanf("%d",&num);

  int copy = num;
  int reverse = 0;

  while ( copy> 0)
  {
    reverse = (reverse * 10)+(copy % 10);
    copy /= 10;
  }
  if(reverse == num)
  {
    printf("enetered no. is palindrome");

  }
  else{
    printf("eneterd no is not palindrome");
  }
  return 0;
}
