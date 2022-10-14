#include <stdio.h>
#include "3-cal.h"
/**
 * op_add - adds two integers to gether
 * @a: integer 1.
 * @b: integer 2.
 * Return: the sum of  and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract one integer from the other
 * @a: first integer
 * @b: second integer
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers together
 * @a: first integer
 * @b: second integer
 * Return: the product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - devides two integers
 * @a:the numerator
 * @b: the denominator
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - the modulus of two integers
 * @a: the numerator
 * @b: the denominator
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
