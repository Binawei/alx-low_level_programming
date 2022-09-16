#include "main.h"
/**
 * more_numbers - prints x10 of numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j);
			j++;
		}
		i++;
	}
}
