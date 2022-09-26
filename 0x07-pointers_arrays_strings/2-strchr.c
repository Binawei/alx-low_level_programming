#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in strings
 * @s: the string which the character will be located
 * @c: the character to be located in bytes
 *
 * Return: a pointer to s, or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
