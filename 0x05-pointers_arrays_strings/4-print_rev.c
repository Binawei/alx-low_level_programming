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
	int i, new;
	int swap = 0;

	for (new = 0; s[new] != 0; new++)
		;
	for (i = 0; i < new / 2; i++)
	{
		swap = s[i];
		s[i] = s[new - 1 - i];
		s[new - 1 - i] = swap;
	}
	for (i = 0; i < new; i++)
		_putchar(s[i]);
	_putchar('\n');
}
