#include <stdio.h>
#include <stdlib.h>
/**
 * main -print alphabet in lower and upper case
 * putchar(): writes to standard output
 * Return: Always (0) success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
