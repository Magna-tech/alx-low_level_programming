#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly formed string, NULL for failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i = 0, j = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	l2++; /*Null terminator at the end of the combined string*/
	new = malloc((l1 + l2) * sizeof(char));

	if (new == NULL)
		return ('\0');
	while (s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];

	return (new);
}
