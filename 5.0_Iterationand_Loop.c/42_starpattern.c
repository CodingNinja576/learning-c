#include<stdio.h>
int main()

{
  printf("Welcome to star pattern printer");
  printf("\nplease enter the no. of rows you want to print your pattern :");
  int rows ;
  scanf("%d",&rows);

  printf("\n your desired right half pyramid is as follows : \n");
   
  for (int i = 1 ; i <= rows ; i ++ )
  {
    for(int j = 1 ; j <=i ; j++)
    {
      printf(" *");
    }



    printf("\n");
  }
  

   printf("\n\n\n");
   printf("your required reverese right half pyramid is : \n");

   for(int i = 1 ; i<=rows ; i++)
   {
      for(int j = rows ; j >=i ;j-- )
      {
        printf("* ");
      }

    printf("\n");
    
   }

   printf("\n\n\n");
    printf("required left hand pyramid is as follows : \n");
     for ( int i = 1 ; i <=rows ; i++)
     {
      for(int j = (rows -1) ; j >= i ; j -- )
      {
        printf("  ");
      }
      for(int k =1 ; k<=i ; k++)
      {
        printf(" *");
      }



      printf("\n");
     }

     printf("\n\n\n");
      printf("your rquired reverese left half pyramid is :\n");

      for( int i = 1 ; i<=rows;i++)
      {

        for( int k = 1 ; k <= i ; k++)
        {
          printf("  ");
        }
        for( int j = rows ; j>=i ; j-- )
        {
          printf("* ");
        }


        printf("\n");
      }


  return 0;
}