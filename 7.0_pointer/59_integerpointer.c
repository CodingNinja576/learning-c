#include<stdio.h>
int main()
{
 int num;

 int *ptr = &num;
 printf("welcome to showcasing inteeger pointers\n");
 printf("please enter the value : \n");
 scanf("%d",ptr);
 printf("\nvalue of num is %d ",*ptr);
 printf("\nvalue of num is %d ",num);







  return 0;
}
