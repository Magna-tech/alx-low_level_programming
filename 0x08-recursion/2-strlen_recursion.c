#include "main.h"

/**
 * _strlen_recursion - finds length of a string using recursion
 * @s: the string given.
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
