#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;
	i = 0;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
