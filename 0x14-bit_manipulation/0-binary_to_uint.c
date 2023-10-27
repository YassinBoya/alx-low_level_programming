#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, power;

	if (!b)
		return (0);
	for (i= 0; b[i] != "\0"; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		power = len - 1 - i ;
		sum += 1 << power
	}

	return (sum);
}
