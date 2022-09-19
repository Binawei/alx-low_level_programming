#include "main.h"
/**
 * print_rev - prints a string, in reverse,
 * @*s: parameter to be used as the pointer
 *
 * Return: just void
 */
void print_rev(char *s)
{
	int i, len, tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
