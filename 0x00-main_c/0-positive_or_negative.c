  1 #include <stdlib.h>
  2 #include <time.h>
  3 #include <stdio.h>
  4
  5 /** main - entry point for the program
  6   *
  7   * return: (0) success
  8   */
  9 int main(void)
 10 {
 11         int n;
 12
 13         srand(time(0));
 14         n = rand() - RAND_MAX / 2;
 15         if(n > 0)
 16         {
 17                 printf("%d is positive\n", n);
 18         }
 19         if(n < 0)
 20         {
 21                 printf("%d is negative\n", n);
 22         }
 23         else if(n = 0)
 24         {
 25                 printf("%d is zero\n", n);
 26         }
 27         return (0);
 28 }
