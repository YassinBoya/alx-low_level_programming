#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 * @argc: the number of the command line arguments
 * @argv: a pointer to an array of command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			return (printf("Error\n"), 1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

