#include<stdio.h>
/**
 * main - a program that prints all possible combinations single number
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
		if (n == 57)
		{
		break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
