#include<stdio.h>
int main()
{
  printf("welcome to reverse digit program \n");
  // yaad rkhna jis no. ke last mein 0 ho vo exception hai iss program kaa
  printf("please input the no. whose digits you want to get reveresed :");
  int num;
  scanf("%d",&num);
  int reverse = 0;   // --> ye vo no. hai jo reverse hokr aayega.
  int copy = num;    // --> iska use krtey hain taki hum main number ke saath chedkani na karein uski copy ke saath karein.
  while(copy>0)     // eg. no aaya 24 to yahan kya hoga 
  /*
  step 1: check hoga whwther 24>0 ......ans. yes so it will transfer to braces.
  step 4: now check hoga whether 2>0 .....ans yes so transfer to step 5

  */
  
  {
    reverse = (reverse * 10)+copy % 10;   /*
    step2: reverse multiply by zero + 24 %10 = 4 reverse mein store ho jayega 4.
    step 5:now ab hoga 4*10 = 40 + 2 

    */
    copy /= 10;
    /*
    step 3: copy = copy / 10 mein 24 /10 = 2 ans aayega copy mein store ho jayega 2.
    */
  }
  printf("the reverse of %d is %d ",num,reverse);
  return 0;




}