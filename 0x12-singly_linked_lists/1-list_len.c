#include "lists.h"

/**
 * list_len - returns the length of the string
 * @h: link to the list
 *
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
