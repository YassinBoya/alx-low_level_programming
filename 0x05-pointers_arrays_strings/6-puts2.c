#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string.
 * @str: A pointer to the string.
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
			while (i < length)
			{
				putchar(str[i]);
				i += 2;
			}
	putchar('\n');
}

