#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: A pointer to the starting memory location
 * @b: The constant byte value that will be copied
 * @n: The number of bytes to be filled with the constant value c
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr = (unsigned char *) s;
	unsigned char value = b;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr++ = value;
	}
	return (s);
}
