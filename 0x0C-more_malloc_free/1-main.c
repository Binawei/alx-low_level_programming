#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks my code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_concat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
