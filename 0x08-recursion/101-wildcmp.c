#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (*(s1 + i) == *(s2 + i) || *(s2 + i) == '*')
		return (1);
	else
		return (0);
}
