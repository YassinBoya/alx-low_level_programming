#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer
 * @array: array of integers to search for integer
 * @size: length od the array
 * @cmp: pointer to the function
 *
 * Return: the index of the integer founded
 * -1 if no element matches or size <= 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);
	if (array && size && cmp)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	}
	return (-1);
}
