#include "main.h"

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

	if (!b)
		return (0);
	int length = strlen(b);

	for (int i = 0; i < length; i++) {
		binaryDigit = b[i] - '0';
		result = result * 2 + binaryDigit;
	}

	return result;
}






