#include "function_pointers.h"

/**
 * print_name - prints the name exactly as is
 * @name: the name to be printed
 * @f: function that takes a char param
 *
 * Return: no value
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
