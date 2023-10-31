#include "main.h"
/**
 * append_text_to_file - a function that creates a file
 * @filename: name of the file
 * @text_content: the content of the file created
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *new;
	/*char *buffer = (char *) malloc(sizeof(char) * text_content);*/
	int length, chars_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, W_OK) != 0)
	{
		return (-1);
	}
	new = fopen(filename, "a");

	if (new == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fclose(new);
		return (1);
	}
	length = strlen(text_content);
	chars_written = fwrite(text_content, sizeof(char), length, new);
	fclose(new);

	if (chars_written != length)
	{
		return (-1);
	}

	return (1);
}
