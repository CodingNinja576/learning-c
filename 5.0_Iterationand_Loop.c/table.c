#include<stdio.h>
int main()
{int num ;
printf("welcome to table printer \n");
  printf("enetr the number whose table you want :\n");
  scanf("%d",&num);
  for(int i=1 ; i<=10  ;i++  )
  {
    //("\n%d",i*num); or

    printf("\n%d x %d = %d",num ,i , num*i);

  }

return 0;
}