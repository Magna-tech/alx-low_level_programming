#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be traversed
 * @size: size of the array
 * @cmp: pointer to function to be called
 *
 * Return: index of the first element
 * -1 if no match is found or if size is less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, ret;

	if (array == NULL || (*cmp) == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		ret = (*cmp)(array[i]);
		if (ret != 0)
			return (i);
		i++;
	}
	return (-1);
}
