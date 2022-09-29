#include "lists.h"

/**
 * free_dlistint - frees a singly linked list
 * @head: link to start of the list
 *
 * Return: no value
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
