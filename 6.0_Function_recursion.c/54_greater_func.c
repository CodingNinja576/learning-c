#include<stdio.h>
float max( float , float);
int main()
{
  float a,b;
  printf("enter values of a and b");
  scanf("%f %f",&a,&b);
  max(a ,b);

  return 0;
}
float max( float a , float b)
{
  if(a>b)
  {
    printf("%f is greater one",a);
  }
  else
  {
    printf("%fis greater",b);
  }
  //or ternary 
  // return a > b ? a : b ;

}

