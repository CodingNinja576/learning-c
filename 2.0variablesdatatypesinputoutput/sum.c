#include<stdio.h>

int main() {
int num1, num2, sum ;
//welcoming user
printf("welcome to my calculator\n");
//taking input from user

printf("please enter first number:");
scanf("%d", &num1);
printf("please enter second number:");
scanf("%d", &num2);
//perfoming arithmetic operation
sum= num1 + num2;
//displaying result
printf("sum of the numbers enterd is %d",sum);
return 0;
}