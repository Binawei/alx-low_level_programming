#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * main checks the code for tyhe function that will
 * implement the djb2 algorithm
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	char *s;

	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}

