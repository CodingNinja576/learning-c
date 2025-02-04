#include<stdio.h>
int main()
{int number;
  printf("enter number");
  scanf("%d",&number);
  //this program is different important to you
  
  float floating=number;
  printf("original number entered is %d\n",number);
  //method 2 explicit conversion
  printf("number converted is %f",(float) number);
  return 0;
}