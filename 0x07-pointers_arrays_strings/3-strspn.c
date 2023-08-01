#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: apointer to a string
 * @accept: a pointer to a string
 * Return: n the number of matching characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int b;
	const char *ptrS = s;
	const char *ptrAcc = accept;

	while (*ptrS)
	{
		for (b = 0; ptrAcc[b]; b++)
		{
			if (ptrAcc[b] == *ptrS)
			{
				n++;
				break;
			}
			else if (ptrAcc[b + 1] == '\0')
				return(n);
		}
		ptrS++;
	}
	return (n);
}
