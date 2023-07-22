#include "main.h"
/**
 * print_triangle -  a function that prints a triangle, followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j++)
		{
			if (i > j)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
