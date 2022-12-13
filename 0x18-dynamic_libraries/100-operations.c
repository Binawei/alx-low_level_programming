#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the int for the argumetof the function
 * Return: 0 (success)
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
/**
 * _atoi - function that convert a string to an integer.
 * @s: the parameter used as the string for the argument
 * Return: Void
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == ' ')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);

}
/**
 * _isalpha - the funcyion that checks for alphabetical characters and prints
 * @c: the character that will be used as the argument
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
/**
 * _isdigit - checks for digits
 * @c: the character to be used as argument
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
/**
 * _islower - function that checks for lowercase character.
 * @c: is the character for the alphbet
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
