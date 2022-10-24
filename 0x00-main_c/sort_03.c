#include<stdio.h>
/**
  * int starting point for the program
  * broke code with else instade of if
  */
int main(void)
{
   int a,b,c;
   printf("enter three numbers");
   scanf("%d %d %d", &a, &b, &c);
   if(a > b && a > c) 
   {
      printf("%d is the largest daa!", a);
   }
   else(b > a && b > c) 
   {
      printf("%d is the largest daa!", b);
   }
   else (c > a && c > b)
   {
      printf("%d is the largest daa!", c);
   }
   else(a == c && b == c)
   {
      printf("All numbers are equalled");
   }
}
