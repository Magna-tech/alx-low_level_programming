#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: name of file to be opened
 * @letters: number of letters printed
 *
 * Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *new;
	ssize_t chars_read, output;
	char *buffer = (char *) malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	new = fopen(filename, "r");
	if (new == NULL)
	{
		free(buffer);
		return (0);
	}

	chars_read = fread(buffer, sizeof(char), letters, new);

	if (chars_read == -1)
	{
		fclose(new);
		free(buffer);
		return (0);
	}
	output = write(STDOUT_FILENO, buffer, chars_read);

	if (output != chars_read)
	{
		fclose(new);
		free(buffer);
		return (0);
	}
	free(buffer);
	fclose(new);
	return (output);

}
