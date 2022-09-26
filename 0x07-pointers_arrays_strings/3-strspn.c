#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string to be scanned
 * @accept: string containing the list of characters to match in s
 * Return:  number of bytesin s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
