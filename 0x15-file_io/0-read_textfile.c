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

	new = fopen(filename, '');
	if (filename == NULL)
	{
		return (0);
	}

	char buffer[letters];
	chars_read = fread(new, buffer, letters);

	if (chars_read == -1)
	{
		fclose(new);
		return (0);
	}
	output = fwrite(STDOUT_FILENO, buffer, chars_read);

	if (output == -1)
	{
		fclose(new);
		return (0);
	}
	fclose(new);
	return (output);

}
