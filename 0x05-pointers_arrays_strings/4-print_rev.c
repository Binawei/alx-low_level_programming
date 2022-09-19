#include "main.h"
/**
 * print_rev - prints a string, in reverse,
 * @*s: parameter to be used as the pointer
 * @s: parametr used as argument
 *
 * Return: just void
 */
void print_rev(char *s)
{
	int bina;

	for (bina = 0; s[bina] != '\0'; bina++)
		;
	for (bina = bina - 1; s[bina] != '\0'; bina--)
	{
		_putchar(s[bina]);
	}
	_putchar('\n');
}
