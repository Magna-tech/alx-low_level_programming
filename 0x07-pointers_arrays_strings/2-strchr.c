#include "main.h"

/**
 * _strchr - searches a string for a character
 * @s: string to be searched
 * @c: character to be searched
 *
 * Return: pointer to the first occurence of c
 * NULL if c is not in string
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			p = (s + i);
			return (s + i);
		}
		else
		{
			p = '\0';
		}
	}

	return (p);
}
