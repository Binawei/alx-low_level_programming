#include "main.h"
/**
 * print_number - prints integers
 * @n: the parameter to be used as an argument
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
