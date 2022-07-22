#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 *
 * Return: 1 if success, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		is_palindrome(s / 2);
		return (1);
	}
	return (0);
}
