#include "main.h"
#include <stdlib.h>
/**
 * string_concat - concatenates two string
 * @s1: the destination string
 * @s2: the source string
 * @n: the integer number of bytes
 * Return: a pointer to the allocated string
 * NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *gba;

	if (s1 == NULL)
	{
		s1 =  " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	if (j < n)
		gba = malloc((i + j + 1) * sizeof(char));
	else
		gba = malloc(sizeof(char) * (i + n + 1));

	if (gba == 0)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		gba[k] = s1[k];
	}
	for (l = 0; l < n && l < j; l++, k++)
	{
		gba[k] = s2[l];
	}
	gba[k] = '\0';
	return (gba);
}
