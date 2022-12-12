#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: the parameter used as an argument fot the pointer
 *
 * Return: Always (0) for success
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
