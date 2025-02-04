#include<stdio.h>
int main()
{
  int age;
  printf("welcome to arto office\nplease enter your age");
  scanf("%d",&age);

  if(age >= 18)
  {
    printf("congratulations! you are eligible for license");
  }
else {
  printf("oo..you are not 18 to avail license");
}
return 0;
}