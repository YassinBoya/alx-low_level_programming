#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @i: the input number as integer
 * Return: always 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
