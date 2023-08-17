#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - A function that handles printing a character argument.
 * @separator: The separator to be printed before the character.
 * @args: The list of arguments.
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - A function that handles printing an integer argument.
 * @separator: The separator to be printed before the integer.
 * @args: The list of arguments.
 */
void print_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - A function that handles printing a float argument.
 * @separator: The separator to be printed before the float.
 * @args: The list of arguments.
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - A function that handles printing a string argument.
 * @separator: The separator to be printed before the string.
 * @args: The list of arguments.
 */
void print_string(char *separator, va_list args)
{
	char *s_arg = va_arg(args, char *);

	if (s_arg == NULL)
		s_arg = "(nil)";
	printf("%s%s", separator, s_arg);
}

/**
 * print_all - A function that prints any type of variables.
 * @format: The format string specifying the types of arguments.
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

		switch (current_format)
		{
			case 'c':
				print_char(separator, args);
				break;
			case 'i':
				print_int(separator, args);
				break;
			case 'f':
				print_float(separator, args);
				break;
			case 's':
				print_string(separator, args);
				break;
			default:
				break;
		}

		separator = ", ";
		fmt++;
	}

	va_end(args);

	printf("\n");
}
