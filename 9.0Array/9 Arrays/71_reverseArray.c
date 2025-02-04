#include<stdio.h>
void printarr(int arr[],int size);
void swap(int *first ,   int *second);
void reverse(int arr[],int size);
int main()
{
  printf("Welcome to Reversing array Program \n");
  int arr1[]={1,2,3,4,5,};
  int arr2[]={9,8,7,6,5,4,3,2,1};

  printf("Array to get Reversed is : \n");
  printarr(arr1,5);
  printf("\nArray after Getting Reversed is :\n");
  reverse(arr1,5);
  printarr(arr1,5);

  printf("\nArray to get Reversed is : \n");
  printarr(arr2,9);
  printf("\nArray after Getting Reversed is : ");
  reverse(arr2,9);
printarr(arr2,9);

}

void printarr(int arr[],int size)
{
  for(int i = 0 ; i <size; i++)
  {
    printf(" %d",arr[i]);
  }
}
void swap(int *first ,   int *second)
{
 
  int temp = *first;
  *first = *second;
  *second = temp;

}

void reverse(int arr[],int size)
{
  for(int i = 0; i < size/2 ; i++)
  {
    swap(&arr[i],&arr[size -1 -i]);
  }
}


















              // ****MY APPROACH *******//



/*   #include<stdio.h>
void reverse(int arr[],int size,int new_arr[]);
int main()
{

  int arr[5]={1,2,3,4,5};
  int new_arr[5];
  reverse(arr , 5,new_arr);
  printf("The new array after reversing is : ");
  for(int j = 0 ; j<5 ; j++)
  {
    printf(" %d",new_arr[j]);
  }

return 0;
}
void reverse(int arr[],int size ,int new_arr[])
{
  int j = 4;
  for(int i = 0 ; i < size ; i++)
  { 
    new_arr[j]=arr[i];
    j--;
  

  }
  
}
*/
 
