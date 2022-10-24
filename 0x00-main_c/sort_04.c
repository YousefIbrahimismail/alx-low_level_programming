#include<stdio.h>    
int main(void)
{
      int number=0;
      printf("enter a number:\n");
      scanf("%d", &number);

      if(number %2 == 0){
         printf("%d the number is even\n", number);
         }else
         {printf("%d is odd\n", number);
      }
   }
