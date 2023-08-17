#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - is afunction that prints strings
 * followed by new line
 * @separator: is a string to be printed between strings
 * @n: is the number of function's arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *ptr = va_arg(args, char *);

		if (ptr)
			printf("%s", ptr);
		else
			printf("nil");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
