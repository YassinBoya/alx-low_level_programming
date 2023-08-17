#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - function check
 * @argc: The number of command-line arguments including
 * the program name
 * @argv: An array of strings containing the
 * command-line arguments
 * Return: 0 or 98 or 99 or 100
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n"), exit (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n"), exit (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n"), exit (100);
	}
	printf("%d\n", operation(num1, num2));
	return (0);
}
