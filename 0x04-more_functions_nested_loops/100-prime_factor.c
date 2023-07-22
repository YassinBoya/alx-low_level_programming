#include <stdio.h>
/**
 * main - a program that finds and prints the largest prime factor of number
 * Return: always 0
 */
int main(void)
{
	long PFactor, number = 612852475143;

	while (number % 2 == 0)
	{
		number /= 2;
	}

	PFactor = 3;
	while (PFactor * PFactor <= number)
	{
		if (number % PFactor == 0)
		{
			number = number / PFactor;
		}
		else
		{
			PFactor += 2;
		}
	}

	printf("%ld\n", number);

	return (0);
}
