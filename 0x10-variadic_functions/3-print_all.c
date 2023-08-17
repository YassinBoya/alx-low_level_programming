#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints any type of variables
 * @format: the format string specifying the types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	const char *fmt = format;

	va_start(args, format);

	while (*fmt)
	{
		if (*fmt == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (*fmt == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (*fmt == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (*fmt == 's')
		{
			char *s_arg = va_arg(args, char *);

			if (s_arg == NULL)
				s_arg = "(nil)";
			printf("%s%s", separator, s_arg);
		}
		separator = ", ";
		fmt++;
	}
	va_end(args);
	printf("\n");
}
