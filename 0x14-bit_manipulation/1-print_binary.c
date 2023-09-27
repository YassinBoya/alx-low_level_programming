#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int printed = 0;

	while (bit)
	{
		if (n & (1UL << --bit))
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}

	if (!printed)
	{
		_putchar('0');
	}
}

