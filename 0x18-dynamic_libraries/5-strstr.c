#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be traversed
 * @needle: substring to be found
 *
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *s;
	char *p;

	while (*haystack != '\0')
	{
		s = haystack;
		p = needle;

		while (*p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (s);
		haystack = s + 1;
	}

	return ('\0');
}
