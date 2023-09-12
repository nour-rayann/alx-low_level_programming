#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, n, x, y;
	dog_t *ptr;

	for (i = 0; name[i] != '\0'; i++)
	;
	for (n = 0; owner[n] != '\0'; n++)
	;
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = malloc(i * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (x = 0; x <= i; x++)
	{
		ptr->name[x] = name[x];
	}
	ptr->age = age;
	ptr->owner = malloc(n * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (y = 0; y <= n; y++)
	{
		ptr->owner[y] = owner[y];
	}
	return (ptr);
}
