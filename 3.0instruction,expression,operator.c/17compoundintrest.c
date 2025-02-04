#include<stdio.h>
int main()
{
  printf("welcome to compound intrest calculator\n");
  float p,r,t;
  printf("enter p:");
scanf("%f",&p);
  printf("enter r:");
scanf("%f",&r);

  printf("enter t:");
scanf("%f",&t);
float CI=p*(1+r/100)*t;
printf("your ci will be %f ",CI);
return 0;
}