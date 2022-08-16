#include "lists.h"

/**
 * pop_listint - deletes the value at the head of the list
 * @head: pointer to the head of the list
 *
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *kichwa;
	int new;

	if (*head == NULL)
		return (0);
	kichwa = *head;
	new = (*head)->n;

	*head = (*head)->next;

	free(kichwa);

	return (new);
}
