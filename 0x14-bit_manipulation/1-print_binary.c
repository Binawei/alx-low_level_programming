#include <stdio.h>
#include "main.h"
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