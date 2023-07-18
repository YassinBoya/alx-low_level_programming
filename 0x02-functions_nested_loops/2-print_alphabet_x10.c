#include "main.h"
/**
 * main - prints alphabet lowercase 10 times
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
