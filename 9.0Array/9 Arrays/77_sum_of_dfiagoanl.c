#include<stdio.h>
const int SIZE =4;
void print_diag_sum(int arr[][SIZE]);
int main()
{printf("welcome to sum of diagonal element of 2D Array\n");
int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int arr2[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};

print_diag_sum(arr2);

  return 0;
}
void print_diag_sum(int arr[][SIZE])
{
  int left_ds =0;
  int right_ds=0;
  for(int i =0;i<SIZE;i++)
  {
    for(int j=0;j<SIZE;j++)
    {
      left_ds+=arr[i][i];
      right_ds+=arr[i][SIZE-1-i];
    }
  }

  printf("The sum of left Diagonal is %d \n",left_ds);
  printf("The sum of Right Diagonal is %d \n",right_ds);

  int total_diagonal_sum = left_ds + right_ds ;
  int index = SIZE/2;
  if (SIZE % 2 ==1)
  {total_diagonal_sum -=arr[index][index];}
  printf("The sum of Diagonals element is is %d\n ",total_diagonal_sum);

}