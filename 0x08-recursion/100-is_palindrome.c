#include "main.h"
/**
 * PalindromeChecker - checks the string
 * @str: the string to be checked
 * @len: the length of the string
 * @i: the incrementor, starting fron 0.
 *
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int PalindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
	{
		return (PalindromeChecker(str, len - 1, i + 1));
	}
	if (str[i] == str[len])
	{
		return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to check
 *
 * Return: 1 if it is a palindrome, otherwise 2.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks a string to see of it is a palindrome
 * or not.
 * @s: the string to check
 *
 * Return: 1 if it is a palindrome, 0 if it os not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = _strlen_recursion(s) - 1;

	return (PalindromeChecker(s, j, i));
}
