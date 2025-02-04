#include<stdio.h>
void print(int arr[] , int size);
void delete(int arr[] , int size , int new_arr[] , int *new_size,int element);
int main()
{

printf("Welcome to deleting elements");
int arr[8]={2,5,7,7,9,10,1,0};

int new_arr[8];
int new_size ;

delete(arr,8,new_arr,&new_size,5);
printf("\n\nThe new array after deleting 5 is : ");
print(new_arr,new_size);


delete(arr,8,new_arr,&new_size,7);
printf("\n\nThe new array after deleting 7 is : ");
print(new_arr,new_size);


delete(arr,8,new_arr,&new_size,10);
printf("\n\nThe new array after deleting 10 is : ");
print(new_arr,new_size);


delete(arr,8,new_arr,&new_size,8);
printf("\n\nThe new array after deleting 8 is : ");
print(new_arr,new_size);



  return 0;
}

void print(int arr[],int size)
{
  for(int i =0 ; i < size ;i++ )
  {
    printf(" %d",arr[i]);
  }
}
void delete(int arr[],int size,int new_arr[], int *new_size,int element)
{
  int j=0;
  for(int i = 0;i<size;i++)
  {
    if ( arr[i] !=element )
    {
      new_arr[j]=arr[i];
      j++;
    }
  }
  *new_size = j;
}



