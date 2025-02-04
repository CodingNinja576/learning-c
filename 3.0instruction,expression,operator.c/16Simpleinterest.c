#include<stdio.h>
int main()
{
  float p,r,t;
  printf("welcome to simple intrest calculator\n");
printf("enter principle:");;
scanf("%f",&p);
printf("enter rate:");
scanf("%f",&r);
printf("enter time:");
scanf("%f",&t);
float SI=(p*r*t)/100;
printf("your simple intrest will be %f",SI);
}