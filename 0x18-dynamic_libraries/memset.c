#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: the pointer that points to the memory area.
 * @n: the first numnber of bytes to fill first
 * @b: bytes to fill with
 *
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
