#include "main.h"
/**
 * print_times_table - prints times table of a giving integer
 * @n: integer that tells the size of the multiplication table
 * Return: Always (0) success
 */
void print_times_table(int n)
{
	for (n = 1; n < 15; n++)
	{
		print_times_table(n);
			_putchar('\n');
	}

	if ((n > 15) || (n < 0))
	{
		_putchar('\0');
	}
	else
	{
		_putchar(n);
	}
}
