#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number as integer
 * Return: always 0
 */
int print_last_digit(int n)
{
	int ld;

	if (n <0)
	{
		ld = -1 * (n % 10);
	}
	else
	{
		ld = n % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
	
