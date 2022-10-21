#include <stdio.h>
/**
  * main - entry point to start the program
  *
  * return: 0 - stops the program
  */
int main(void)
{    
    int q=89;

    printf("the total size of the program’s variable q is equal to %d", sizeof(q));
    printf("\nthe total size of the program’s integer data type is equal to %d",sizeof(int));
    printf("\nthe total size of the program’s character data type is equal to %d",sizeof(char));
    printf("\nthe total size of the program’s floating data type is equal to %d",sizeof(float));
    return (0);
}
