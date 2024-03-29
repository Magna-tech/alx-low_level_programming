#include "lists.h"

/**
 * free_listint - frees a singly linked list
 * @head: link to start of the list
 *
 * Return: no value
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
