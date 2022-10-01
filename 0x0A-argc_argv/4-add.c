#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if Error such as symbols that are not numbers,
 * 0 if nothing is passed.
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	i = 1;

	if (i == 0)
	{
		printf("%d", i);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
