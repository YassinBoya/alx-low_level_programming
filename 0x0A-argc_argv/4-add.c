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
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			return (printf("Error\n"), 1);
		}
		else
		{
			sum += atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
