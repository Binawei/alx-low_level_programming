#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @b: first integer to be swapped
 * @a: last integer to be swapped
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
