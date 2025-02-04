#include<stdio.h>
int occ(int arr[][3],int rows,int cols,int element);
int main()
{

  int arr[3][3]={{1,2,3},{3,4,5},{1,2,3}};   //in 2d array you to also allocate size
  printf("Welcome to Finding ocuurences of an elemnet in 2d array :\n");

  int result = occ(arr,3,3,1);
  printf("occurences of 1 in 2d array is %d : \n",result);  //The occ function is called incorrectly in the main function. When passing an array to a function, you should pass the array name without indices.


  //The result variable should be declared only once in the main function.
  
  result = occ(arr,3,3,5);
  printf("occurences of 5 in 2d array is %d : \n",result);
  
  result = occ(arr,3,3,3);
  printf("occurences of 3 in 2d array is %d : \n",result);
  
  result = occ(arr,3,3,4);
  printf("occurences of 4 in 2d array is %d : \n",result);
  
  
  



  return 0;
}
int occ(int arr[][3],int rows,int cols,int element)
{
  int occ=0;
  for(int i =0;i<rows;i++)
  {
    for(int j =0;j<cols;j++)
    {
      if (arr[i][j]==element)
      occ++;
    }
  }
  return occ;
}