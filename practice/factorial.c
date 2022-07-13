#include <stdio.h>

/**
 * factorial -  calculates the factorial of a number
 * @n: the number given/argument for the function
 *
 * Return: it returns the factorial
 */

int factorial(int n)
{
	int i = 1;

	if (n != 1)
/*function calls itself, recursion */
		i = n * factorial(n - 1);

	return (i);
}

/**
 * main - calls factorial function
 *
 * Return: 0
 */

int main(void)
{
	printf("%d! = %d\n", 5, factorial(5));
	printf("%d! = %d\n", 10, factorial(10));

	return (0);
}
