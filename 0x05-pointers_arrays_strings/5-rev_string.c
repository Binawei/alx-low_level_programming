#include "main.h"
/**
 * rev_string -   function that reverses a string.
 * @s: the parameter used for the argument
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	int tmp = 0;

	for (j = 0; s[j] != 0; j++)
		;
	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = tmp;
	}
	for (i = 0; i < j; i++)
	_putchar(s[i]);
	_putchar('\n');
}
