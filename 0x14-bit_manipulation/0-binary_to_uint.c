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
	int dec_num = 0, i = 0, base = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		dec_num = dec_num * 2 + (b[i] - '0');
		base <<= 1;
		i++;
	}

	return (dec_num);
}
