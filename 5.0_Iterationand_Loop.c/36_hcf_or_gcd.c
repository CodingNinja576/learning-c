#include<stdio.h>
int main()
{
  printf("welcome to gcd calculator\n");
  int first ,second ;
  printf("please enter value of first number : ");
  scanf("%d",&first);
  printf("please enter value of 2nd no : ");
  scanf("%d",&second);

  int min = first < second ? first : second ;


  for(int i = min ; i>=1 ;i--)  // ya to sbsey chota no. jo hai vo gcd hog yaa fir ussey koi chota nhi to at last one hoga
  {
    if(first % i == 0 && second % i == 0)

    {
      printf("G.C.D of %d and %d is %d ", first ,second ,i );
      break;
    }
  }
  return 0;
}