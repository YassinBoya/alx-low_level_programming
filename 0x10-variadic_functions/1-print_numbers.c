#include "variadic_functions.h"
#include < stdarg.h>
/**
 * print_numbers - is a function that prints numbers
 * followed by new line
 * @separator: is a string to prints between numbers
 * @n: is the numbers of the function's parametrs
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n)
		for (i = 0; i < n; n++)
		{

