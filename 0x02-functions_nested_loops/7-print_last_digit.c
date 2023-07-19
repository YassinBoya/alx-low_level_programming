#include<stdio.h>
/**
 * print_last_digit  - a function that prints the last digit of a number
 * @n: number as integer
 * Return: always 0
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		putchar(-ld + 48);
			return (ld);
	}
	else{
		putchar(ld + 48);
		return(ld);
	}
}
