#include "main.h"
/**
 * main - entry point
 * description - prints (_putchar) to stdout
 * Return: always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
