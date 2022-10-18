#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: type of integer; can be negative or positive
 * Description: print +, 0 or - depending on the number
 * Return: 1 if +, 0 if 0 and -1 if minus
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
