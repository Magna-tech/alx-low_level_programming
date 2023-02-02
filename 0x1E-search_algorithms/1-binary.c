#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: the given array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return:index where the value is located or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;
	int i;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
