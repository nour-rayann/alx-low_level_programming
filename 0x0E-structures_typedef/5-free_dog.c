#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory allocated by dog_t
 * @d: to free it from memory
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->owner)
			free(d->owner);
		if (d->name)
			free(d->name);
		free(d);
	}
}
