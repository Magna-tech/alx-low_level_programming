#include "lists.h"

/**
 * print_list - prints a list
 * @h: link to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
