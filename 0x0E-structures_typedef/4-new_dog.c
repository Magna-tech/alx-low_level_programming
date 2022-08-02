#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the owner
 *
 * Return: pointer to memory of new dog
 * NULL if program fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *new;

	/* first find the length of both name and owner*/
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	/*allocate memory to the struct*/
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	/*allocate memory to save a copy of name*/
	new->name = malloc(sizeof(new->name) * i);
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		new->name[k] = name[k];

	/*allocate memory to save a copy of owner*/
	new->owner = malloc(sizeof(new->owner) * j);
	if (new->owner == NULL)
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		new->owner[k] = owner[k];

	return (new);
}
