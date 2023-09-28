#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: the content of the file created
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *new;
	/*char *buffer = (char *) malloc(sizeof(char) * text_content);*/
	int length, chars_written;

	if (filename == NULL)
	{
		return (-1);
	}
	new = fopen(filename, "w");

	if (new == NULL)
	{
		return (-1);
	}
	length = strlen(text_content);
	chars_written = fwrite(text_content, sizeof(char), length, new);
	fclose(new);

	if (chars_written != length)
	{
		return (-1);
	}
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
	{
		remove(filename);
		return (-1);
	}

	return (1);
}
