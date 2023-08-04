#include <stdio.h>
#include "main.h"
/**
 * main - the entry point
 * @argc: the length of arguments in argv
 * @argv: an array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
