#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: then destination string
 * @s2: the source string
 *
 * Return: returns a pointer to s1
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len1, len3, len2;
	unsigned int i, j = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
		s2 = " ";
	len1 = 0;
	while (s1[len1])
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2])
	{
		len2++;
	}
	len3 = len1 + len2;
	str = malloc(sizeof(char) * len3 + 1);/*allocate memory to str*/
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= len3)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}


