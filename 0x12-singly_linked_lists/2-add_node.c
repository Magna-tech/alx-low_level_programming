#include "lists.h"

/**
 * add_node - adds a node to the head of the list
 * @head: the link to the start of the list
 * @str: string to be added
 *
 * Return: address of new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int i = 0;
	list_t *new;

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
	new->next = *head;

	*head = new;

	return (new);
}
