#include "main.h"
#include <stdio.h>
/**
 *get_endianness - a function that checks the endianness
 *
 *Return: 0 if it's big endieen, 1 if is small
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
