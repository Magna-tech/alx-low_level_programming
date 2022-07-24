#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: an array for the args
 *
 * Return: o
 */

int main(int argc, char *argv[])
{
	int count = 1, i = 0;

	(void)argv;
	while (count < argc)
	{
		count++;
		i++;
	}
	printf("%d\n", i);

	return (0);
}
