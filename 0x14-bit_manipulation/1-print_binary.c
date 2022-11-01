#include <stdio.h>
#include "main.h"
/**
 * print - print characters
 * @n: the integer to be printed
 *
 * Return: Void
 */
void print(long int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print(n / 10);
	}
	_putchar(n % 10 + '0');
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: the integer to be converted to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n>>1);
	}
	print(n & 1);
}
