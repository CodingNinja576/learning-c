#include<stdio.h>
int is_sorted(int arr[],int size);
int main()
{
  printf("welcome to checking if array is sorted or not");
int arr1[6]={1,2,3,4,5,6}; //increasing order sorted
int arr2[6]={87,0,67,-98,5,5}; //not sorted
int arr3[6]={9,8,7,6,5,4}; //decreasing order sorteed

  if(is_sorted(arr1,6))
  {
    printf("\nfirst array is sorted");
  }
  else
  {
    printf("\nfirst array is not sorted");
  }
  
  if(is_sorted(arr2,6))
  {
    printf("\nsecond array is sorted");
  }
  else
  {
    printf("\nsecond array is not sorted");
  }
  

  if(is_sorted(arr3,6))
  {
    printf("\nthird array is sorted");
  }
  else
  {
    printf("\n third array is not sorted");
  }
  


  return 0;
}

int is_sorted( int arr[], int size)
{
    int increasing = 1;
    int decreasing = 1;

    for(int i = 1 ; i<size ; i++)
    {
      if(arr[i] > arr[i-1])
      {
        decreasing = 0;
      }
      else if(arr[i] < arr[i-1])
      {
        increasing = 0;
      }

      

    }
    return increasing || decreasing ; // ******remember that always write return assignmet outward of loop braces not inside loop braces ***********
}