#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the file it is compiled from
 *
 * Return: Always 0.
 */
int main(void)
{
	char s;
	s = __FILE__;
	_putchar(s);
	_putchar("\n");
	return (0);
}
