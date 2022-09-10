#include <stdio.h>
/**
 * main - print combination of numbers
 *
 * Return: Always( success)
 */
int main(void)
{
	int g, b;

	for (g = '0'; g <= '9'; g++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (g < b)
			{
				putchar(g);
				putchar(b);

				if (g != '8' || (g == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
