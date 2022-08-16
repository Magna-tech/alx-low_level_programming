#include "lists.h"

/**
 * free_listint2 - frees a singly linked list
 * @head: link to start of the list
 *
 * Return: no value
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
