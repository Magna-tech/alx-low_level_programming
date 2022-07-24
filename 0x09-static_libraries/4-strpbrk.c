#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: pointer to matching byte in s or NULL if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	/*We nest a loop for accept to search within s*/
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/*Check if the bytes match*/
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return ('\0');
}
