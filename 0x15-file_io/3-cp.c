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
	char buffer[BUFFER_SIZE];
	size_t read;

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
	old = fopen(argv[1], "rb");
	new = fopen(argv[2], "wb");

	if (old == NULL || new == NULL)
	{
		fclose(old);
		fclose(new);
		return (-1);
	}
	while ((read = fread(buffer, 1, BUFFER_SIZE, old)) > 0)
	{
		if ((fwrite(buffer, 1, read, new)) != read)
		{
			fprintf(stderr, "Error: Can't write to %s", argv[2]);
			fclose(old);
			fclose(new);
			exit(99);
		}
	}
	if (fclose(old) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(old));
		exit(100);
	}
	if (fclose(new) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(new));
		exit(100);
	}
	return (0);
}
