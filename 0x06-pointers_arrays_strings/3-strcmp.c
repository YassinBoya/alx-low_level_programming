#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: a pointer on a string
 * @s2: a pointer on a string
 * Return: greater or less or equal to 0
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
