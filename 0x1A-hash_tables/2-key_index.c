#include "hash_tables.h"

/**
 * key_index - afunction that return the index of a key given
 * @key: is the key
 * @size: is the size of the array in hash table
 * Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;

index = hash_djb2(key) % size;
return (index);
}
