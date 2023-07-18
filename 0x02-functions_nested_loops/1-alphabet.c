#include "main.h"
/**
* main - a function that prints the alphabet, in lowercase
* Return: always 0
*/
void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
