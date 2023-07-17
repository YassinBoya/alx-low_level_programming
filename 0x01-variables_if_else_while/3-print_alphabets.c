#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase, and then in uppercasei 
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int b = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
