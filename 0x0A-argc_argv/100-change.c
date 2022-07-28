#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimum number of coins to be given as change
 * @argc: number of arguments passed
 * @argv: an array of arguments passed
 *
 * Return: 1 if arguments passed are not exactly 1
 * 0 on exit
 */

int main(int argc, char *argv[])
{
	int coins = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
		printf("0\n");

	coins += (i / 25) + (i % 25) / 10 + ((i % 25) % 10) / 5 +
		(((i % 25) % 10) % 5) / 2 + ((((i % 25) % 10) % 5) % 2) / 1;
	printf("%d\n", coins);

	return (0);
}
