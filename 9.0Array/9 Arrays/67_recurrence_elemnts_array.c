#include<stdio.h>
int occurences(int arr[],int size , int element);

int main()
{
  printf("Welcome to finding occurences of an elemnt \n");
  int arr[]={3,6,7,98,45,3,6,3,71,10};
  int result1 = occurences(arr,10,98);
  int result2 = occurences(arr,10,3);
  int result3 = occurences(arr,10,71);
  printf("ocuurences of  98 in array is : %d\n",result1);
  printf("ocuurences of  3  in array is  :%d\n",result2);
  printf("ocuurences of  71  in array is: %d\n",result3);
  return 0;
}
int occurences(int arr[],int size , int element)
{
  int counter=0;
  for(int i=0;i<size;i++)
  {
    if(arr[i]==element)
    counter++;
  }
  return counter;
}