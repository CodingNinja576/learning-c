#include<stdio.h>

void count_to_100();         // function prototyping    
               
 int sum(int, int);          // function prototyping  
 // (int addition ); if we use this it can be used as a global variable mtlb sb ka return type ki valude addition naam ke variable  mein store ho jayegi...fir hm baaki jagah se addition jitni baar code ke andar likha hai ussey hta sktey hain....

int main() 
{
  count_to_100();      //function call
  int add = sum(4, 5);        //function call     
  printf("\nthe sum is: %d", add);

  int x = 9;
  int y = 54;
  int z = sum(x, y);
  printf("\nthe sum is: %d", z);     
  return 0;
}

void count_to_100() {
  for (int i = 1; i <= 100; i++) {         //function defination
    printf(" %d", i);
  }
}

int sum(int first, int second) {
  int addition = first + second;      //function defination
  return addition;
}
// function prototyping is optional but condition is that fir hmey int main cooomand se pehley uski defination deni pdegi