#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: a pointer
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;
	i = length - 1;
	while (i <= 0)
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}

