#include <stdio.h>
#include "dog.h"
/**
 * main - checks the code
 *
 * Return: always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and i am %.1f :) - woof!\n", my_dog->name, my_dog->age);
	return (0);
}
