#include "main.h"
/**
 * _puts - rints a string, followed by a new line, to stdout
 * @str: the string tto be printed
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
