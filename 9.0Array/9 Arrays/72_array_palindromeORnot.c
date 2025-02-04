#include<stdio.h>
int is_palindrome(int array[],int size);
int main()
{
  int arr1[]={1,2,3,4,5,4,3,2,1};  //palindrome
  int arr2[]={1,1,1,1};   //palindrome
  int arr3[]={1,1,1,2};   //not palindrome
  printf("Welcome to checking Palindrome or not .... 1 -->yes ,palindrome ,,,  0 --> not palindrome\n");

  printf("\nresult for first array is : %d\n ",is_palindrome(arr1,9));

  printf("\nresult for second array is : %d\n ",is_palindrome(arr2,4));

  printf("\nresult for Third array is : %d \n ",is_palindrome(arr3,4));



  return 0;
}

int is_palindrome(int arr[] ,int size)
{
  for(int i = 0 ; i < size / 2 ; i++)
  { if( arr[i] !=arr[size-1-i])
  {
    return 0;
  }
  return 1;


  }

}
