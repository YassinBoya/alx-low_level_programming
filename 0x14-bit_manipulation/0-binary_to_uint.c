#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *binary_to_uint - function that convert a binary number to a unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0, i = 0, len, power;

	len = strlen(b);

	if (b != '0' || b != '1' || !b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1') {
			power = len - 1 - i;
			sum += 1 << power;
		}
	}
	return (sum);

}
