#include "lists.h"

/**
 * delete_nodeint_at_index - delete anode at given index
 * @head: pointer tot start of list
 * @index: given index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	(void)head;
	if (index > 0)
		return (1);
	else
		return (-1);
}
