#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: a link to the head of the list
 * @str: string to be added
 *
 * Return: address of new node or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	int i = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[i])
		i++;
	new->str = copy;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
