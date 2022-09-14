#include "main.h"
/**
 *void print_alphabet(void) - prints the alphabet, in lowercase
 *
 * Return:Always (0) success
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
