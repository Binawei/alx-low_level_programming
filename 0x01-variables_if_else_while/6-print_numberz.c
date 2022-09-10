#include <stdio.h>
#include <stdlib.h>
/**
 * main -print all single digit numbers using only putchar
 * putchar(); writes to stdio
 * Return: Always (0) success
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');
	return (0);
}
