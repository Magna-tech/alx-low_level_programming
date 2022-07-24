#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments it receive with a new line
 * @argc: argument count
 * @argv: an array of the arguments passed
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
