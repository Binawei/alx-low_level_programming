#include "main.h"
/**
 * print_number - Write a function that prints an integer.
 * @n: the integer to be printed
 *
 * Return: Always (0) success
 */
void print_number(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(i);
	}
	return (0);
}
