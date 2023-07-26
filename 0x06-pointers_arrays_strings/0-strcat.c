#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @src: a pointer on a string
 * @dest: a pointer on astring
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	char *concat = dest;

	while (*dest != '\0')
	{
		*dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';
	return (concat);
}
