#include "main.h"

/**
 * create_array - creates an array of chars with an initialized char
 * @size: the size of the array
 * @c: the specified initialization char
 *
 * Return: pointer to the array, NULL for failure
 */

char *create_array(unsigned int size, char c)
{
	char *new;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	new = malloc(size * sizeof(char));
	while (i < size)
	{
		new[i] = c;
		i++;
	}
	return (new);
}
