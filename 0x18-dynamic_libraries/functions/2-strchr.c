#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: a pointer to a string
 * @c : the charactere to find in the string
 * Return: a pointer to the first char c in the string s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
