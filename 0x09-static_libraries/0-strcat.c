#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: string to be added to end of dest
 *
 * Return: returns a ponter to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	/*for (i = 0; dest[i] != '\0'; i++);*/
	/*This loop counts the length of the string dest*/
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
