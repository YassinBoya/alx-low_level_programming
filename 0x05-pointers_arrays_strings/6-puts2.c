#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: a pointer
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
