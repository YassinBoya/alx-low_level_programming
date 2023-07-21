#include "main.h"
/**
 * int _isupper - a function that checks if the input character is uppercase
 * @c: input as a character
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	       return (1);
	else
	return (0);
}
