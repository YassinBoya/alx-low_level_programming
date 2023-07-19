#include<stdio.h>
/**
 * print_last_digit  - a function that prints the last digit of a number
 * @n: number as integer
 * Return: always 0
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = -n;
	}
	ld = n % 10;
	if (ld < 0)
	{
		ld = -ld;
	}
	putchar(ld + '0');
	return (ld);
}
