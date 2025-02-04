#include<stdio.h>
int main()
{
  int num;
  printf("welcome to sum of digits\nplease enter th no. whose digits sum you want :");
  scanf("%d",&num);
  int sum = 0;
  int copy = num ;
  while(num>0)
  {
    sum +=num % 10 ;    // sum = sum+ num %10
    num /= 10; // jaisey no. hain  32448 agr hm is no. ko divide krengey 10 se to ayega 

  }
  printf("sum of digits is %d",sum);
}
    
