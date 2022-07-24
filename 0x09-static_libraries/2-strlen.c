#include "main.h"

/**
 * _strlen - prints the length of the string
 * @s: the string to be checked
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len = len + 1;

	return (len);
}
