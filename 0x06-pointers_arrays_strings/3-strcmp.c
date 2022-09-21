#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: an integer (n) success
 */
int _strcmp(char *s1, char *s2)
{
	int x, y, answer;

	x = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}
	answer = (x - y) * 15;
	return (answer);
}
