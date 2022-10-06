#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc
 * @b: the variable to allocate memory for
 *
 * Return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *g;

	g = malloc(b);
	if (g == NULL)
	{
		exit(98);
	}
	return(g);
}
