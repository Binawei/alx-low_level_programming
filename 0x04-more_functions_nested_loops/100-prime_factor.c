#include <stdio.h>
/**
 * main - prints the largest prime factor
 * of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	int v;

	while (v++ < number / 2)
	{
		if (number % v == 0)
		{
			number /= 2;
			continue;
		}
		for (v = 3; v < number / 2; v += 2)
		{
			if (number % v == 0)
				number /= 2;
			continue;
		}

		for (v = 3; v < number / 2; v += 2)
		{
			if (number % v == 0)
				number /= v;
		}
	}
	printf("%d\n", number);
	return (0);
}
