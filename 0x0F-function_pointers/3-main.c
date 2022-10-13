#include <stdio.h>
#include <stdlib.h>
#include "3-cal.h"
/**
 * main - program that performs simple operations.
 * and  prints the result of the operation, followed by a new line
 * @argc: the argument count
 * @argv: the argumentn vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*g)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc[2] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	if (g == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	g = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", g(a, b));
	return (0);
}
