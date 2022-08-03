#include "function_pointer.h"

/**
 * print_name - prints the name exactly as is
 * @name: the name to be printed
 * @f: function that takes a char param
 *
 * Return: no value
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (name[i] != '\0')
	{
		_f(name[i]);
		i++;
	}
}
