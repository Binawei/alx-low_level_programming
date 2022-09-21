#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: first strings to be concatenated
 * @src: last string to be concatenated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[i] = '\0';
	return (dest);
}
