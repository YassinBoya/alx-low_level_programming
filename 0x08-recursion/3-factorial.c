#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: an integer to calculate its factorial
 * Return: 0 or -1 or the factorial of the number given
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 1)
	{
		return (1);
	}
	else
	{
		return (n + factorial(n - 1));
	}
}
