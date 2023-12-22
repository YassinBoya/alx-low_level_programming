#include "hash_tables.h"
/**
 * hash_djb2 - Compute the hash value using the djb2 algorithm.
 * @str: The input string (unsigned character array) to be hashed.
 * Return: The computed hash value as an unsigned long int.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
