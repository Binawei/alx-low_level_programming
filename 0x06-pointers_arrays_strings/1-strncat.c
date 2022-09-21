#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * it will use at most n bytes from src
 * @dest: First string to be concatenated
 * @src: Last string to be concatenated
 * @n: number of bytes from the src string
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		++len;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[i + len] = '\0';
	return (dest);
}
