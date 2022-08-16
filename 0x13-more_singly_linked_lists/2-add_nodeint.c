#include "lists.h"

/**
 * add_nodeint - adds a node to the head of the list
 * @head: the link to the start of the list
 * @n: string to be added
 *
 * Return: address of new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
