#include<stdio.h>
int main()
{
int num =5;
printf("value of num. before change is %d\n",num);
int *ptr;
ptr=&num;
*ptr=87;
printf("value of num after change is %d" ,num);






  return 0;
}