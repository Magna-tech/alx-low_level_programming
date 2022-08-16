#include "lists.h"

/**
 * sum_listint - gives a sum of all the data in a list
 * @head: pointer to the start of the list
 *
 * Return: 0 if list is empty and sum otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head == NULL)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
