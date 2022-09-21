#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s:the string to be changed
 *
 * Return: a character
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
