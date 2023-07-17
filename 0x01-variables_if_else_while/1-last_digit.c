#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * A program that checks if the number is greater than 5 or is 0 or is lees than 6 and not 0
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 5)
	{
		printf("the last digit of %d is greater than 5", n)
	}
	else if(n == 0)
	{
		printf("the last digit of %d is 0", n)
	}
	else if(n !=0 || n < 6)
	{
		printf("the last digit of %d is less than 6 and not 0", n)
	}
	return (0);
}
