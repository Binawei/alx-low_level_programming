#include "main.h"
/**
 * _puts - rints a string, followed by a new line, to stdout
 * @str: the string tto be printed
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
		_puts(str);
		str++;
	}
}
