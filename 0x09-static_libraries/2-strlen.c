#include "main.h"
/**
 * _strlen - a function that return the length of a string
 * @s: apointer
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
