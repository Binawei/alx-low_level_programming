#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c: is the character for the alphbet
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
