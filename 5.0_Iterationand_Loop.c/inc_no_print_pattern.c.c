#include<stdio.h>
int main()
{
  printf("welcome to no. print pattern \n");
  int rows ;
  printf("eneter the no. of rows you want to print : \n");
  scanf("%d",&rows);
  int number = 1 ;

  for(int i = 1 ; i <=rows ; i++)
  {
    for ( int j = 1 ; j <= i ; j++)
    
    {
     printf("%d ",number);
     number++ ;
    }




    printf("\n");
  }
  return 0;

}