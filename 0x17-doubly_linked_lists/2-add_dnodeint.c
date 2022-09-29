#include "lists.h"

/**
 * add_nodeint - adds a node to the head of the list
 * @head: the link to the start of the list
 * @n: string to be added
 *
 * Return: address of new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
