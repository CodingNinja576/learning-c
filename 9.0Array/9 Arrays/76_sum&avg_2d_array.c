#include<stdio.h>
int sum(int arr[][3],int rows,int cols);
int main()
{
  printf("Welcome to printing sum and average of elemnts of 2d array\n");
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int result = sum(arr,3,3);
  float avg = result/9.0;
  printf("The sum is %d and avg. is %f : ",result,avg);



  return 0;
}
int sum(int arr[][3],int rows,int cols)
 
{
  int add=0;
  for(int i =0;i<rows;i++)
  {
    for(int j =0;j<cols;j++)
    {
      add += arr[i][j];
    }
  }
  return add;

}