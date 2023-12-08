#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @head: pointer to the start of the list
 * @idx: index where the new node should be added
 * @n: new node
 *
 * Return: address of new node or NULL on failure
 */
listint_t *insert_dnodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	(void)idx;
	(void)n;

	if (*h == NULL)
		return (NULL);
	else
		return (NULL);
}
