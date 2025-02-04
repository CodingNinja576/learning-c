#include<stdio.h>
struct Book
{
  char title[20];
  char author[20];
  int price;

};
int main()
{
  struct Book book1 ={ "PHYSICS","HC VERMA",400};
  struct Book book2=
  {
     .title="MAths",
     .author="B.s Grewal",
     .price = 436
  };
  struct Book book3 = { "Engineering drawing","N.d Bhatt",370};

  printf("\nDetails of Book1 are :\n Title = %s\n Author = %s\n Price = %d\n",book1.title,book1.author,book1.price);
  printf("\nDetails of Book2 are :\n Title = %s\n Author = %s\n Price = %d\n",book2.title,book2.author,book2.price);
  printf("\nDetails of Book3 are :\n Title = %s\n Author = %s\n Price = %d\n",book3.title,book3.author,book3.price);


  return 0;
}