#include "main.h"
/**
 * _memcpy - copies memory area.
 * @src: memory area where bytes will be copied from
 * @dest: memory area where bytes will be copied to.
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
