#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: a pointer
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\n')
		++length;
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
