#include<stdio.h>
#include<string.h>
int is_palindrome(char str[],int size);
int main()
{
  char text[20];
  printf("Welcome! In thsi program you will check that entered text is palindrome or not\n");
  printf("Please enter text :\n");
  scanf("%s",text);
  int length = strlen(text);
  if(is_palindrome(text,length))
  {
    puts("entered text is palindrome");
  }
  else{
    printf("enteered text is not palindrome");
  }


}
int is_palindrome(char str[],int size)
{
  for (int i = 0;i<size/2;i++)
  if(str[i]!=str[size-1-i]
  )
  {
    return 0;
  }
  return 1;

}



/*int check(char str[],int length);
int main()
{
  printf("Welcome to checking palindrome or not\n");
  char str1[5]=   "nitin"   ;     //{'a','b','c','b','a'};     //palindrome
  char str2[5]={'a','b','c','d','e'};    //not palindrome
  
  puts("entered string to check :");
  printf("%s",str1);
  check(str1,5);
  printf("entered string is : %d",check(str1,5));
  
  return 0;
}

 int check(char str[],int length)
{
  for(int i =0;i<length/2;i++)
  {  if(str[i]!=str[length-1-i])
  {
    return 0 ;
  
  }
  return 1;

  }
  
}
*/