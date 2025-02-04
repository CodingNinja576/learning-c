#include<stdio.h>
#include<string.h>
int main()
{ char name[50];
printf("please enter you name :");
fgets(name , 50 ,stdin);
int size = strlen(name);
printf("\nlength of your name is %d",size);


  return 0;
}