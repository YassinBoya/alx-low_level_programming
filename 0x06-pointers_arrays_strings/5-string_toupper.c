#include "main.h"
/**
 * string_toupper - a function that changes lowercase letters to uppercase
 * @s: a poiter on a string
 * Return:char as s
 */
char *string_toupper(char *s)
{

	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}

