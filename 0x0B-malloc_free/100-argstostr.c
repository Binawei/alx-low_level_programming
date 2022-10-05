#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the argument count
 * @av: the vector of the argument
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, count;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == 0)
	{
		return (NULL);
	}
	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			count++;
		}
		count++;
	}
	count++;
	str = malloc(count * sizeof(char));
	if (str == 0)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			str[j++] = av[i][k];
		}
		str[j++] = '\n';
	}
	str[j++] = '\0';
	return (str);
}
