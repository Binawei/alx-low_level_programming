#include "main.h"
/**
 * helper - finds the square root of two numbers
 * @x: the number
 * @y: the number to test for the square root of @x
 *
 * Return: square root
 */
int finder(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	else
	{
		return (finder(x, y + 1));
	}
	return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (finder(n, 1));
}
