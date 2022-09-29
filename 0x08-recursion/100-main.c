#include "main.h"
/**
 * main - calls other functions
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palindrome("madam");
	_putchar(r);
	r = is_palindrome("level");
	_putchar(r);
	return (0);
}
