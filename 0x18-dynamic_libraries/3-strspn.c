#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: string
 * @accept: bytes to be searched
 *
 * Return: number of bytes in the initial segment of n with bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}

	return (i);
}
