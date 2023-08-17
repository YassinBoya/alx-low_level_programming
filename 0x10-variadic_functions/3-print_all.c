#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - a function handles printing a character argument
 * @separator: the separator to be printed before the character
 * @args: the list of arguments
 */
void print_char(char separator, va_list args)
{
	printf("%c%c", separator, va_arg(args, int));
}
/**
 * print_int - a function handles printing an integer argument
 * @separator: the separator to be printed before the character
 * @args: the list of arguments
 */
void print_int(char separator, va_list args)
{
	printf("%c%d", separator, va_arg(args, int));
}
/**
 * print_float - a function handles printing a float argument
 * @separator: the separator to be printed before the character
 * @args: the list of arguments
 */
void print_float(char separator, va_list args)
{
	printf("%c%f", separator, va_arg(args, double));
}
/**
 * print_string - afunction handles printing a string argument
 * @separator: the separator to be printed before the character
 * @args: the list of arguments
 */
void print_string(char separator, va_list args)
{
	char *s_arg = va_arg(args, char *);

	if (s_arg == NULL)
		s_arg = "(nil)";
	printf("%c%s", separator, s_arg);
}
/**
 * print_all - a function that prints any type of variables
 *@format: the format string specifying the types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	const char *fmt = format;

	va_start(args, format);

	while (*fmt)
	{
		char current_format = *fmt;

		if (*(fmt + 1) != '\0')
			separator = ", ";

		switch (current_format)
		{
			case 'c':
				print_char(*separator, args);
				break;
			case 'i':
				print_int(*separator, args);
				break;
			case 'f':
				print_float(*separator, args);
				break;
			case 's':
				print_string(*separator, args);
				break;
			default:
				break;
		}

		fmt++;
	}

	va_end(args);
	printf("\n");
}
