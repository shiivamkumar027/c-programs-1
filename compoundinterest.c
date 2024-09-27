#include<stdio.h>
#include<math.h>
int main()
{
double principle=10000;
double rate=3;
double time=2;
double Amount = principle * 
                  ((pow((1 + rate / 100), 
                    time)));
  double CI = Amount - principle;
 
  printf("Compound Interest is : %lf",CI);
  return 0;
}

