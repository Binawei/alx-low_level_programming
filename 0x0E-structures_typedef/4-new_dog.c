#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return:a pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nm, ow, ag;
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	for (nm = 0; name[nm]; nm++)
		;
	nm++;
	n_dog->name = malloc(nm * sizeof(char));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (ag = 0; ag < nm; ag++)
	{
		n_dog->name[ag] = name[ag];
	}
	n_dog->age = age;
	for (ow = 0; owner[ow]; ow++)
		;
	ow++;
	n_dog->owner = malloc(ow * sizeof(char));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (ag = 0; ag < ow; ag++)
		n_dog->owner[ag] = owner[ag];
	return (n_dog);
}
