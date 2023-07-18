#include<stdio.h>
/**
* main - a function that prints the alphabet, in lowercase
* Return: always 0
*/
int main(void)
{
	int alphabet()
	{
		int i;
		
		for (i = 97; i <= 122; i++)
		{
			putchar( i );
		}
		putchar('\n');
	}
	return(0);
}
