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

/**
* shash_table_delete - Deletes a sorted hash table.
* @ht: The sorted hash table to delete.
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	shash_node_t *current, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	free(ht);
}

/**
* shash_table_insert_sorted - Inserts a node into a sorted hash table.
* @ht: The sorted hash table.
* @new_node: The new node to insert.
*/
void shash_table_insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL || strcmp(ht->shead->key, new_node->key) >= 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;

		if (ht->stail == NULL)
			ht->stail = new_node;

		return;
	}

	tmp = ht->shead;

	while (tmp->snext != NULL && strcmp(tmp->snext->key, new_node->key) < 0)
		tmp = tmp->snext;

	new_node->sprev = tmp;
	new_node->snext = tmp->snext;

	if (tmp->snext == NULL)
		ht->stail = new_node;
	else
		tmp->snext->sprev = new_node;

	tmp->snext = new_node;
}
