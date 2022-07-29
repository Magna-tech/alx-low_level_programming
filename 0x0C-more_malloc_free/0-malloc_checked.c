#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Description: return a pointer to the allocated memory
 * Return: no value
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	else
		return (i);
}
