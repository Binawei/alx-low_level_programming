#include "main.h"
/**
 * main - function that checks for lowercase character.
 * _islower(): lower case letters
 *
 * 'c' is the character for the alphbet
 * Return: Always 0
 */
int _islower(int c)
{

	c = 'a';
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
