#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >=65 && c <= 90)
	{
		return (0);
	}
	_putchar('\n');
}
