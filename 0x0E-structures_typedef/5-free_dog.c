#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees all memory allocated to dog struct
 * @d: pointer to the dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
