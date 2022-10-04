#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the charcter to initialise the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *bin;

	bin = malloc(sizeof(char) * size);
	if (size == 0 || bin == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		bin[i] = c;
		i++;
	}
	return (bin);
}
