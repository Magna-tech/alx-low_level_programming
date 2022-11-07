#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 * @n: given number
 *
 * Return: no return value
 */

void print_binary(unsigned long int n)
{
	char s[256], temp;
	int middle, i, len = 0;

	while (n != 0)
	{
		if (n % 2 == 0)
			s[len] = '0';
		else
			s[len] = '1';
		n /= 2;
		len++;
	}

	s[len] = '\0';

	middle = len / 2;
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	printf("%s", s);
}
