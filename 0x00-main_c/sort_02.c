#include<stdio.h>
int main(void)
{
   int a,b,c;
   printf("enter three numbers");
   scanf("%d %d %d", &a, &b, &c);
   if(a > b && a > c) 
   {
      printf("%d is the largest daa!\n", a);
   }
   if(b > a && b > c) 
   {
      printf("%d is the largest daa!\n", b);
   }
   if (c > a && c > b)
   {
      printf("%d is the largest daa!\n", c);
   }
   if(a == c && b == c)
   {
      printf("All numbers are equalled\n");
   }
}
