/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float a,b,sum,sub,mul,divi;
  printf("enter two numbers:");
  scanf("%f%f",&a,&b);
  sum=a+b;
  sub=a-b;
  mul=a*b;
  divi=a/b;
  printf("sum=%f",sum);
  printf("subtraction=%f",sub);
  printf("multiplication=%f",mul);
  printf("division=%f",divi);
  return 0;

}
