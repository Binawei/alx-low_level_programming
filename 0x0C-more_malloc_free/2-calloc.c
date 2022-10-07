#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of element of the array
 * @size: the size of each element of the array
 * Return: a pointer to the allocated memory and NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *bin;
	unsigned int i;
	void *gba;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	bin = malloc(nmemb * size);
	gba = bin;
	if (bin == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		bin[i] = 0;
	}
	return (gba);
}
