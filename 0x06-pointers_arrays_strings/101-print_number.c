#include "main.h"
/**
 * print_number - a function that Prints any integer with putchar
 * @n: a pointer on a  Number to prints
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
