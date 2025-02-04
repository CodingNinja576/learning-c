#include<stdio.h>
int main()
{
  int score ;
  printf("please enter students score : ");
  scanf("%d",&score);
   score > 80 ? printf("high"): 
   (score <=80 && score > 50 ? printf("medium") : printf("low") );
   return 0;
   /*
   we have done this question with help of nested ternary and we have to remember one thing that in this question we have used nested ternary 
   and here hmey ye yaad rkhna hai ki hmey printf command use krni hai
   */


}