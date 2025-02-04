#include<stdio.h>
struct Student 
{
  int rollno;
  char name[20];
  float marks;

};
int main( )
{
  struct Student student1 ;
  printf("Please enter Student1 Details :\n");
  printf("Please enter student roll no : \n");
  scanf("%d",&student1.rollno);
  printf("Please enter student1 name : \n");
  scanf("%9s",student1.name);
  printf("Please enter student marks : \n");
  scanf("%f",&student1.marks);
  
  printf("Detail of student entered by you are following : \n\n");
  printf("Roll no:%d\nStudent name %9s\nmarks : %0.2f\n",student1.rollno,student1.name,student1.marks);

}