#include <stdio.h>

/**
 * factorial -  calculates the factorial of a number
 * @n: the number given/argument for the function
 *
 * Return: it returns the factorial
 */

int factorial(int n)
{
	if (n >= 1)
/*function calls itself, recursion */
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
