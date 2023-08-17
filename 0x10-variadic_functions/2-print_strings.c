#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of function's arguments.
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

	va_end(args);
	printf("\n");
}
