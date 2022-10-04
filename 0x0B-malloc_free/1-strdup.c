#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter.
 *  @str: string that is to be duplicated to for the new string
 *
 *  Return: a pointer to the duplicated string, and
 *  NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *bin;
	unsigned int i;/*incrementor for the original string str*/
	unsigned int j;/*incrementor for dupliction*/

	if (str == NULL)
	{
		return (NULL);
	}

	/*allocate memory for the duplicate string bin including the '\0'*/
	for (i = 0; str[i]; i++)
	{
		bin = malloc(sizeof(char) * (i + 1));
	}

	if (bin == NULL)
	{
		return (NULL);
	}
	/*copy string*/
	j = 0;
	while (str[j])
	{
		bin[j] = str[j];
		j++;
	}
	bin[j + 1] = 0;
	return (bin);
}
