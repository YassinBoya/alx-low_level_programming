#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: a pointer on the array of integers
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = n - 1, j = 0; j < i; i--, j++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
