#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - is a function that prints numbers
 * followed by new line
 * @separator: is a string to prints between numbers
 * @n: is the numbers of the function's parametrs
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (separator && n)
				printf("%d %s", va_arg(args, int), (char *)separator);
			else if (!separator && n)
				printf("%d", va_arg(args, int));
			else if (!n)
				printf("ERROR");
		}
		printf("\n");
}
