#include<stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase except q and e
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	for(i = n ; n <= 122 ; i++)
	{
		if(n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
