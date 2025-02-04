#include<stdio.h>
int main()
{
  printf("welcome to printing fibonacci series");
  printf("please eneter the no. up to which series required : ");
  int num;
  scanf("%d ",&num);
  printf(" 0");
  if ( num> 0){
    printf(" 1");
  }

  int prev = 0;
  int next = 1;
  
   
   while(prev+next<=num)
   {
      int temp = prev+next;
    printf(" %d",temp);
    prev = next ;
    next = temp ;
   }
   
   return 0;
}
