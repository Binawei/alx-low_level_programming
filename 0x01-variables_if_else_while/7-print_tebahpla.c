#include <stdio.h>
#include <stdlib.h>
/**
 * main- print the alphabet in lowercase letters in reverse order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
