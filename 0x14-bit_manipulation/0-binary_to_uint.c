#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, power, sum = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; b[i] <= len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			power = len - 1 - i;
			sum += 1 << power;
		}
	}

	return sum;
}

