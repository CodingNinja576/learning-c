#include<stdio.h>
struct Car
{
  char make[25];
  char model[25];
  int year;
  char color[25];
  };
  typedef struct Car Car ;
  void print_car(Car *car);
int main()
{
  Car ford = { .make="Ford",.model="Aspire",.year = 2016,.color ="Red"};
  print_car(&ford);


}
void print_car(Car *car)
{
  printf("This %s model of car which is of %s color ,was purchased in %d year , and is made by %s company ",car->model,car->color,car->year,car->make);

}