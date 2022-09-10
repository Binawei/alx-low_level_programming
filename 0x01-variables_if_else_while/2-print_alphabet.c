#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * putchar(): to write output to the standard output
 * Return:Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
