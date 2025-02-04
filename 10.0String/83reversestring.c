#include<stdio.h>
#include<string.h>
int main()
{
  printf("Here in this program What will you type will be get reversed\n");
  char text[100];
  printf("Please enter any text the text you will type will be get reversed\n");
  fgets(text,sizeof(text),stdin);
  int length = strlen(text);    // this length will also include nulll character
  for(int i =0;i<(length)/2;i++)
  {
    char empty = text[i];
    text[i]=text[length-1-i];
    text[length-1-i]=empty;
  }
  printf("the text reversed is : %s",text);

}