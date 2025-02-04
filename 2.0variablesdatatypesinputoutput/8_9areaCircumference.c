#include<stdio.h>
int main()


{const float PI = 3.1459;     //ye constatnt declare kreny wala tarika is important
  float radius,area;
  printf("please enter radius of circle in cm");
  scanf("%f",&radius);
  
  printf("circumference of circle is %f\n",2*PI*radius);
  area=PI*radius*radius;
  printf("area of circle is %f",area);



}