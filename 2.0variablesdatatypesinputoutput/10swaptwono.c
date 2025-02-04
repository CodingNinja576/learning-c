 #include<stdio.h>
 int main()
 {
  int first,second,temp;
  printf("please enter the first number");
  scanf("%d",&first);
  printf("please enter the second number");
  scanf("%d",&second);
  //swapping
  temp=first;
  first=second;
  second=temp;
  printf("swapped number are %d and %d",first,second);
  return 0;


}