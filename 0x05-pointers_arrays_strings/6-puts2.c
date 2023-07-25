#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string.
 * @str: A pointer to the string.
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		putchar(*str);
		str += 2;
	}
	putchar('\n');
}

