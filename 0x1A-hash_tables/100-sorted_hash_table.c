#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

for (i = 0; i < size; i++)
ht->array[i] = NULL;

ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
 * shash_table_set - Adds or updates an element in a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *tmp;
char *value_copy;
unsigned long int index;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
value_copy = strdup(value);
if (value_copy == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->shead;
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = value_copy;
return (1);
}
tmp = tmp->snext;
}
new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
{
free(value_copy);
return (0);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(value_copy);
free(new_node);
return (0);
}
new_node->value = value_copy;
new_node->next = ht->array[index];
ht->array[index] = new_node;
shash_table_insert_sorted(ht, new_node);
return (1);
}


/**
 * shash_table_get - Retrieves a value
 * associated with a key in a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 * Return: The value associated with the key
 *or NULL if the key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *tmp;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];

while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);

tmp = tmp->next;
}
return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *tmp;

if (ht == NULL)
return;

tmp = ht->shead;

printf("{");

while (tmp)
{
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->snext;

if (tmp != NULL)
printf(", ");
}

printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *tmp;

if (ht == NULL)
return;

tmp = ht->stail;

printf("{");
while (tmp)
{
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->sprev;

if (tmp != NULL)
printf(", ");
}

printf("}\n");
}
