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
	int old, new;
	char buffer[BUFFER_SIZE];
	size_t reader, writer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Check if file to copy from exists and can be read*/
	if (access(argv[1], R_OK) != 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*Open both files in binary mode*/
	old = open(argv[1], O_RDONLY);
	new = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);

	if (old == -1 || new == -1)
	{
		close(old);
		close(new);
		return (-1);
	}
	while ((reader = read(old, buffer, BUFFER_SIZE)) > 0)
	{
		writer = write(new, buffer, reader);
		if (writer != reader)
		{
			fprintf(stderr, "Error: Can't write to %s", argv[2]);
			close(old);
			close(new);
			exit(99);
		}
	}
	if (close(old) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", old);
		exit(100);
	}
	if (close(new) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", new);
		exit(100);
	}
	return (0);
}
