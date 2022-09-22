#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer to s
 *
 * Return: poniter to s
 */
char *leet(char *s)
{
	int stringcount, leetcount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNumbers[] = "4433007711";

	/*scan through the string*/
	stringcount = 0;

	while (s[stringcount] != '\0')
		/*check whether leetLetter is found*/
	{
		leetcount = 0;
		while (leetcount < 10)
		{
			if (leetLetters[leetcount] == s[stringcount])
			{
				s[stringcount] = leetNumbers[leetcount];
			}
			leetcount++;
		}
		stringcount++;
	}
	return (s);
}
