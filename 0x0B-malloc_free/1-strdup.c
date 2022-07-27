#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be copied
 *
 * Return: pointer to the new memory location
 * NULL for insufficient memory
 */

char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (str == '\0')
		return ('\0');
	while (str[j])
		j++;
	dup = malloc((++j) * sizeof(char));
	if (dup == '\0')
		return ('\0');
	for (i = 0; i < j; i++)
		dup[i] = str[i];
	return (dup);
}
