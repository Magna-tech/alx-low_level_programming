#include "main.h"
/**
 * main - a function that copies file1 to file2
 * @argc: argument count
 * @argv: array of args
 *
 * Return: 1 on success and -1 on failure
 */
int main(int argc, char *argv[])
{
	FILE *old;
	FILE *new;
	char content;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (access(argv[2], W_OK) != 0)
	{
		return (-1);
	}
	old = fopen(argv[1], "r");
	new = fopen(argv[2], "a");

	if (old == NULL)
	{
		return (-1);
	}
	if (new == NULL)
	{
		fclose(new);
		return (1);
	}
	while ((content = fgetc(old)) != EOF)
	{
		fputc(content, new);
	}
	fclose(old);
	fclose(new);

	return (1);
}
