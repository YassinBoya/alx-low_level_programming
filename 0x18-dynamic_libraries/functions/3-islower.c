#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: the character in ascii table
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
