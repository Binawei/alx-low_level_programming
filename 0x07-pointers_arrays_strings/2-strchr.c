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
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
