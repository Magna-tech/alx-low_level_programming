#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter iteratively
 * @array: the array
 * @size: size of the array
 * @action: pointer to the funtion to be used.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || (*action) == NULL)
		exit(0);
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
