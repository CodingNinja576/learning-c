#include<stdio.h>
int main()
{
  int arr[10];
  printf("Welcome to finding min. and max. element in array for this you have to enter no. in array\n");
  for(int i=0;i<10;i++)
  {
   printf("Please enter %dth elemnt of array :",(i+1));
   scanf("%d",&arr[i]);
  }
  int max =arr[0];
  int min=arr[0];
  for(int i = 0;i<10;i++)
  {
  {
    if(max < arr[i])
    max = arr[i];
  }
  if (min > arr[i])
  min = arr[i];
  }
  printf("max of elemnets of array is %d and min of elemnts of array is %d",max,min);


  return 0;
}

