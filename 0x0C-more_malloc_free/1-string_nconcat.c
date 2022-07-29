#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to copy from s2
 *
 * Return: pointer to newly allocated space in memory
 * NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int i, j;
	unsigned int l;

	if (s1 == NULL)
	       s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	i++;
	new = malloc(sizeof(*new) * (i + n));
	if (new == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		new[j] = s1[j];
	for (l = 0; s2[l] != '\0' && l < n; l++)
	{
		new[j] = s2[l];
		j++;
	}
	new[j] = '\0';
	return (new);
}
