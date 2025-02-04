#include<stdio.h>
void print(char arr[],int size);
void copy_arr(char *arr,int size,char *new_arr);
int main()
{
  char arr[15]={'D','I','V','Y','A','N','S','H',' ','S','H',
'A','R','M','A'};
char new_arr[15];

printf("Welcome to coping array\n\n");
printf("Original array too be copied is :\n");
print(arr,15);
printf("\nNew array after coping is :\n ");
copy_arr(arr,15,new_arr);
print(new_arr,15);


}

void print(char arr[],int size)
{
  for(int i =0;i<size;i++)
  {
    printf("%c",arr[i]);
  }
}
void copy_arr(char *arr,int size,char *new_arr)
{
  for (int i=0;i<size;i++)
  {
    *(new_arr+i)=*(arr+i);
  }
}