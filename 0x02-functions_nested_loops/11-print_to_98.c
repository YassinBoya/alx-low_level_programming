#include "main.h"
/**
 * print_to_98 - afunction that's prints numbers from n number to 98
 * @n: number where printing starts
 * Return: always 0
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for( i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}

