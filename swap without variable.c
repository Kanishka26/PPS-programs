/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a,b;
  printf("enter value of a:\n");
  scanf("%d",&a);
  printf("enter value of b:\n");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("values after swap are:");
  printf("\na:%d",a);
  printf("\nb:%d",b);
  return 0;

}
