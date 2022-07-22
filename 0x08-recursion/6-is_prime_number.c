#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: given number
 *
 * Return: 1 if the number is prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n <= 1)
		return (0);
	else
		return (1);
}
