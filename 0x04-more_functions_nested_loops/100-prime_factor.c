#include <stdio.h>
/**
 * main - a program that finds and prints the largest prime factor of number
 * Return: always 0
 */

int main(void)
{
	long i = 3, PFactor, number = 612852475143;

	PFactor = number;
	while (PFactor % 2 == 0)
	{
		PFactor /= 2;
	}

	while (i <= PFactor)
	{
		if (PFactor % i == 0)
		{
			PFactor = PFactor / i;
		}
		else
		{
			i += 2;
		}
	}

	printf("%ld\n", PFactor);

	return (0);
}

