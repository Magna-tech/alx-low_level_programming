#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: first string
 * @src: string to be added to dest
 * @n: size of bytes to be copied from src
 *
 * Description: it copies a number of bytes onto dest
 * The null byte is not copied if bytes are n or more
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
