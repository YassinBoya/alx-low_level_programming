#include "hash_tables.h"

/**
 * hash_table_create - a function that create a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table otherwise
 * it return NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int i;
hash_table_t *table = malloc(sizeof(hash_table_t));

if (table != NULL)
{
table->array = malloc(sizeof(hash_node_t *) * size);
table->size = size;
if (table->array != NULL)
{
for (i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return (table);
}
}
return (NULL);
}
