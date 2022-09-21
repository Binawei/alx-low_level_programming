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
	while (src[len] != '\0')
	{
		++len;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + len] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
