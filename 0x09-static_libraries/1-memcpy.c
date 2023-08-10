#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @src: the memory area that should be copied
 * @dest: the destination memory area where the value should be copied
 * @n : the number of how many time the value should be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *ptrSrc = (unsigned char *) src;
	unsigned char *ptrDest = (unsigned char *) dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptrDest++ = *ptrSrc++;
	}
	return (dest);
}
