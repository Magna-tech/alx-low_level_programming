#include "main.h"

/**
 * _strlen - prints the length of the string
 * @s: the string to be checked
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; i <= s; i++)
		len = len + 1;

	return (len);
}
