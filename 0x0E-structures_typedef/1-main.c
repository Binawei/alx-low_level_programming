#include <stdio.h>
#include "dog.h"
/**
 * main - checks the function
 *
 * Return: nothing
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and i am %.1f :) - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
