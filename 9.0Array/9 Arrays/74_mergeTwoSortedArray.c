#include<stdio.h>
void merge(int arr1[],int size1,int arr2[],int size2,int arr3[],int size3);
void print(int arr[],int size);
int main()
{
printf("Welcome to Merging Two arrays : \n");
int arr1[6]={2,4,6,8,10,12};
int arr2[8]={1,3,5,7,9,11,13,15};
printf("Merged array is : \n");
int arr3[14];
merge(arr1,6,arr2,8,arr3,14);

print(arr3,14);






}
void print(int arr[],int size)
{
  for(int i =0 ;i <size;i++)
  {
    printf(" %d",arr[i]);
  }
}
void merge(int arr1[],int size1,int arr2[],int size2,int arr3[],int size3)
{
  int i=0 ,j=0,k=0;
  while(k<(size3))
  {
    if(j==size2)
    {
      arr3[k++]=arr1[i++];

    }
    else if (i==size1)
    {
      arr3[k++]=arr2[j++];
    }
    
    else if(arr1[i]<arr2[j])
    {
      arr3[k++]=arr1[i++];
      
    }
    else if(arr2[j]<arr1[i])
    {
      arr3[k++]=arr2[j++];
    }
  }
}