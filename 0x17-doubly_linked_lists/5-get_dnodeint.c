#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at a given index
 * @head: pointer to the head of the list
 * @index: the given index
 *
 * Return: the searched node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
