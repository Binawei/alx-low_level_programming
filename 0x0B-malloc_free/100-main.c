#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks my code
 * @av: the vector of the argument
 * @ac: the count argument
 *
 * Return: void
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
