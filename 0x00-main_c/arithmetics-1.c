#include <stdio.h>
/**
  * main - entry point for the program
  *
  * return: 0 (Success)
  */
int main(void)
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("Line 1 - Value of c is %d\n", c);

	c = a % b;
	printf("Line 2 - Value of Mod c is %d\n", c);
	return (0);
}
