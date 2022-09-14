#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char i, j;

	i = 0;
	while (i <= 9)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
