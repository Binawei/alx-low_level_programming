#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the parameter to be used.
 *
 * Return:Alaways void.
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < n; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
