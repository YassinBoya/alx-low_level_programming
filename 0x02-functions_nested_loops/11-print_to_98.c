#include "main.h"
/**
 * print_to_98 - a function that's prints numbers from n to 98
 * @n: number where the printing starts
 * Return: always 0
 */
void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
		}
	}
	_putchar(",");
	_putchar(" ");
}
