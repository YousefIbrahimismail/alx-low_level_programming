#include "main.h"
/**
 * _abs - Compute absolute value of an integer
 * @n: integer type; number
 * Return: Absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
