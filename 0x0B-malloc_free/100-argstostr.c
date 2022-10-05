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
	int i, j, k;
	int count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
	}
	/*allocating memory to the pointer*/
	str = malloc(sizeof(char) * (ac + 1 + count));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (1)
		{
			if (av[i][j] == '\0')
			{
				str[k] = '\n';
				k++;
				break;
			}
			str[k] = av[i][j];
			k++;
			j++;
		}
	}
	return (str);
}
