#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively
 * @n: The number for which the square root is to be found
 * @start: The starting value for searching the square root
 *
 * Return: The square root of 'n', or -1 if not found.
 */
int find_sqrt(int n, int start)
{
	if (start * start > n)
	{
		return (-1);
	}
	if (start * start == n)
	{
		return (start);
	}
	return (find_sqrt(n, start + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
