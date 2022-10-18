#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to check; int type
 * Return: Returns value of last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
