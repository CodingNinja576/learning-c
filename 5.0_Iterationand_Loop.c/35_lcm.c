#include<stdio.h>
int main()

{
  printf("Welcome to lcm calculator\n");
  int first ,second ;
  printf("please enter the first no. : ");
  scanf("%d",&first);
  printf("please enter value of second no. : ");
  scanf("%d",&second);

  int min = first > second ? first : second ;
  int max = (first*second);

  for(int i = min ; i <= max ;i++)
  {
    if ( i % first == 0 && i % second == 0 ) {
      printf("lcm of %d and %d is %d ", first , second , i);
      break;
    }

    
  }
  return 0;
}