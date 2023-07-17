#include<stdio.h>
/**
 * main - A program that prints the alphabet in lower case
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	while(n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
