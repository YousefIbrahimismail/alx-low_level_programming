#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase characters
 *
 * @c: character to be checked
 * Return: 1 if character is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
