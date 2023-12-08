#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to the start of the list
 * @idx: index where the new node should be added
 * @n: new node
 *
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	(void)idx;
	(void)n;

	if (*h == NULL)
		return (NULL);
	else
		return (NULL);
}
