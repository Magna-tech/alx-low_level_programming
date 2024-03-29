#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: link to the start of the list
 *
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
