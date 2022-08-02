#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints dog elements
 * @d: the dog to be printed.
 *
 * Return: no value
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d.name);
	if (age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d.age);
	if (owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d.owner);
}
