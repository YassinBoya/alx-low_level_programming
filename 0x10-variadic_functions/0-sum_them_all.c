#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parametrs
 * @n: the number of its arguments
 *
 * Return: the sum of the values fucntion paramters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);
	if (n)
	{
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
	}
	return (0);
}
