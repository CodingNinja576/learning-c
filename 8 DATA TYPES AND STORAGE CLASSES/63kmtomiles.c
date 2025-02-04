#include<stdio.h>
int main(){
long kms;
const float Mileperkm = 0.621371;
printf("welcome to distance convertor;");
printf("\nplease enter the distance in kilometers");
scanf(" %ld, &kms ");
long miles = kms*Mileperkm;
printf("the distance in miles is %ld ",miles);







  return 0;
}
