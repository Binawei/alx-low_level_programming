#include <stdlib.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: This is the string to be searched
 * @accept:This is the string containing a list
 * of characters
 * Return: a pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
