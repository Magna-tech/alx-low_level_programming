#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elemts
 * @size: bytes of each element
 *
 * Return: pointer to allocated memory
 * NULL for failure or if either of the two is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *new;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		new[i] = 0;
	return (new);
}
