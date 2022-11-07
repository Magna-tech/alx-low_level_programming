#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: the given binary number
 *
 * Return: the converted number
 * 0 if there is one or more chars in the string b that is not 0 or 1
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int bin_num, dec_num = 0, i = 0, base = 1, rem;

	if (b == NULL)
		return (0);
	while (i > 0)
	{
		if (b[i] != 0 || b[i] != 1)
		{
			return (0);
		}
		i++;
	}
	bin_num = atoi(b);

	while (bin_num != 0)
	{
		rem = bin_num % 10;
		dec_num = dec_num + rem * base;
		bin_num = bin_num / 10;
		base = base * 2;
	}

	return (dec_num);
}
