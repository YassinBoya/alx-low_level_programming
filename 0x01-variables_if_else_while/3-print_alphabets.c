#include<stdio.h>
/**
 * main - A program that 
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int b = 65;

	while ( n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	while ( b <= 90)
	{
		putchar(b);
		b++;
	}
	return (0);
}
