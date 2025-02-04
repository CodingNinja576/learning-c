#include<stdio.h>
int sum(int arr[],int size);

int main()
{
  int size = 10;
  int arr[size];
  
  printf("Welcome ! To find sum and avg of array elemnts\n");
  for(int i=0 ; i<size ; i++)
  {
    printf("please enter %dth elements of array : ",(i+1));
    scanf("%d",&arr[i]);
  }
  int summation= sum( arr,size);
  printf("\n sum of elements of array is %d",summation);
  float avg  =summation/size;
  printf("avg. of elemnts of array is %.2f",avg);

  //    OR
/* int array[5]={1,2,3,4,5};
int sum=0;
for(int i=0;i<5;i++)
{
  sum+=array[i];
}
printf("sum of elements of array is %d \n",sum);
float avg=sum/5;
printf("average of elements of array is %f\n",avg);
printf("Thankyou!!!"); */






  return 0;
}

int sum(int arr[],int size)
{
  int sum=0;
  for(int i =0;i<size;i++)
  {
     sum+=arr[i];
  }
  return sum;

}