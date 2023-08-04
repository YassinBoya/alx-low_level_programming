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
	int sum;

	if (argc == 3)
	{
		sum= atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
