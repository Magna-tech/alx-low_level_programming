#include "search_algos.h"

/**
 * linear_search - searches an array using linear search
 * @array: pointer to the first element of array to search in
 * @size: size of the array
 * @value: value to be searched for in the array
 *
 * Return: index where value first appears
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		if (array[i] == value)
		{
			return (i);
			break;
		}
		i++;
	}
	return (-1);
}
