#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a new line
 * @seperator: the string to be printed between numbers
 * @n:number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n && seperator != NULL)
		{
			printf("%s ", seperator);
		}
		if (seperator == NULL)
		{
			continue;
		}
	}
	printf("\n");
	va_end(ap);
}
