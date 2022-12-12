#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * it will use at most n bytes from src
 * @dest: First string to be concatenated
 * @src: Last string to be concatenated
 * @n: number of bytes from the src string
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
