#include <stdio.h>
#include "main.h"
/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of the integers
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the differnce.
 */
int sub(int a, int b)
{
	int dif;

	dif = a - b;
	return (dif);
}
/**
 * mul - product of two numbers
 * @a: first
 * @b: second
 *
 * Return: the product of two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - division of two integers
 * @a: first
 * @b: second
 *
 * Return: product
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - remainder of the division of two integers
 * @: numerator
 * @b: denominator
 *
 * Return: the modulus of a and b
 */
int mod(int a, int b)
{
	return (a % b);
}
