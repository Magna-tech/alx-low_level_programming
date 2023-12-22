#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the ht
 * Return: pointer to the new table
 * NULL if the function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	new->size = size;

	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
