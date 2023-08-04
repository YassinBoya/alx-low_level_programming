#include <stdio.h>
/**
 * main - the entry point
 * @argc: the number of the command line arguments
 * @argv: a pointer to an array of command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
