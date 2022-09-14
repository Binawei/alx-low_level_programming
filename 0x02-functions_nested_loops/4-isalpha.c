#include "main.h"
/**
 * _isalpha - the funcyion that checks for alphabetical characters and prints
 * @c: the character that will be used as the argument
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
