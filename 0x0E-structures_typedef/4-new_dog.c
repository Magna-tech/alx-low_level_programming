#include "dog.h"

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
	int i, j;
	dog_t *new;

	/* first find the length of both name and owner*/
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	j++;
	new = malloc(sizeof(dog_t));
	if (new == '\0')
	{
		free(new);
		return ('\0');
	}
	return (new);
}
