#include "main.h"
/**
 *clear_bit - a function that sets the value of a bit to 0 at a given index.
 *@index: is the index, starting from 0 of the bit you want to set
 *@n: the number
 *Return: if successful 1, Error -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
