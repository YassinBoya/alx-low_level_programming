#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that checks if the number is greater than 5 or is 0 or is lees than 6 and not 0
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0", n, ld);
	}
	else if (n != 0 || n < 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, ld);
	}
	return (0);
}
