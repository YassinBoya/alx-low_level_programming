#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * @str: a pointer to a string
 */
void puts_half(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
	{
	for (i = (length / 2); i < length; i++)
	{
		putchar(str[i]);
	}
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
		{
			putchar(str[i + 1]);
		}
	}
	putchar('\n');
}

