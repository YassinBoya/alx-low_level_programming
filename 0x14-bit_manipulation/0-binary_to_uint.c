#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary format
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int binaryDigit = 0;
	unsigned int result = 0;
	int i, length = 0;

	if (!b)
		return (0);
	length = strlen(b);

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		binaryDigit = b[i] - '0';
		result = result * 2 + binaryDigit;
	}

	return (result);
}






