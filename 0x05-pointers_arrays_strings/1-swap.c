#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: an integer poniter
 * @b: an integer poniter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

