#include "main.h"
/**
 * _isdigit - checks if the number is digit
 * @c: the number to checks
 * Return: 1 or 0
 */
int _isdigit(int c)
{
       if (c >= 0 && c <= 9)
       {
	       return (1);
       }
       else
       {
	       return (0);
       }
}
