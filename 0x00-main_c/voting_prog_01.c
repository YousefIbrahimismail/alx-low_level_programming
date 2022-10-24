#include <stdio.h>
int main(void)
{
   int user_age=0;
   printf("Enter your age numerically to check voting eligibility\n");
   scanf("%d", &user_age);
   if( user_age >= 18)
   {
   printf("You are eligible to vote, find your voting information here\n");
   }
   else
   { 
      printf("You are not eligible\n"); 
   }
}
