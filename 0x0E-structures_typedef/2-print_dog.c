#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: the pointer of the struct
 * Return:void
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("age: ");
		printf("%f\n", d->age);
		printf("owner :");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}

