#include "main.h"
#include <stdlib.h>
/**
 * string_concat - concatenates two strings
 * @s1: this is the destination string whose end will be joined to the src
 * @s2: the source string whose begining will be joined to the end of s1.
 * @n: the number of bytes that will be used from the source
 *
 * Return: a pointer to the allocated space in memory
 * NULL if it fails
 */
char *string_concat(char *s1, char *s2, unsigned int n)
{
	char *gba;
	unsigned int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = " ";
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
		j++;
	if (j < n)
	{
		gba = malloc(sizeof(char) * (i + j + 1));
	}
	else
		gba = malloc((i + n +  1) * sizeof(char));
	if (gba == 0)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
		gba[k] = s1[k];
	for (l = 0; l < n && l < j; l++, k++)
	{
		gba[k] = s2[l];
	}
	gba[k] = '\0';
	return (gba);
}

