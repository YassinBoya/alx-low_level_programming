#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc.
 * @b: Size of the memory to allocate.
 *
 * Return: Pointer to the allocated memory.
 * If malloc fails, the function terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}

