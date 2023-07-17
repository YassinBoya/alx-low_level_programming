#include<stdio.h>
/**
 * main - a program that prints all possible combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		if( n == 57)
		{
		putchar(n);
		break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
