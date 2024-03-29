#include "lists.h"

/**
 * dlistint_len - returns the lenght of a list
 * @h: pointer to the head
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
