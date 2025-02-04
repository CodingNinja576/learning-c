#include<stdio.h>
int main()
{
  /*
  absolute value kya hoti hai pehley ye smjhtey hain agr koi number positive hai to us no. ki absolute value vo number hi hoga agr vo no. negative hai to us no. ki absolute value uski value hogi negative sign ht jayega bss
  jaisey 6 ki absolute value hai 6
  and -6 ki absolute value hai 6
  
  */
 int num;
 printf("please enter number :");
 scanf("%d", & num);
 printf("%d is absolute number", (num > 0 ? num : -num) );
 
 }
