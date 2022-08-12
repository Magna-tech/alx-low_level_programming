#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: link to start of the list
 *
 * Return: no value
 */
void free_list(list_t *head)
{
	list_t temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
