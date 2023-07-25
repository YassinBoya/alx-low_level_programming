#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: apointer to a sting
 */
void puts_half(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
		length++;
	for (i = (length / 2); i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
