#include "dog.h"

/**
 * free_dog - frees the dog that was saved
 * @d: the dog
 */

void free_dog(dog_t *d)
{
	while (d)
		free(d);
}
