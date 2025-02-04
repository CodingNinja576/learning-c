#include<stdio.h>
int main()
{
  int a,b,c;
  char opr ;
  printf("please enter value of a " );
  scanf("%d",&a);
  printf("please enter value of b");
  scanf("%d",&b);
  printf("please enter operation (+,-,*,/)");
  scanf(" %c",&opr);
  switch(opr)
  { 
    case '+':
    c=a+b;
    printf("%d",c);
    break;

    case '-':
    c=a-b;
    printf("%d",c);
    break;

    case '*':
    c=a*b;
    printf("%d",c);
    break;

    case '/':
    c=a/b;
    
    printf("%d",c);
    break;
    default :
    printf("you have entered an wrong choice ");


    }
  


}