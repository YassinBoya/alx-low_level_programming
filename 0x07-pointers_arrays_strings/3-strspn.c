#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: apointer to a string
 * @accept: a pointer to a string
 * Return: n the number of matching characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *accept)
			n++;
		s++;
		accept++;
	}
	return (n);
}
