#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * simple_print_buffer - print buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of memory to print
 *
 * Return: nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int j;

	j = 0;
	while (j < size)
	{
		if (j % 10)
		{
			printf(" ");
		}
		if (!(j % 10) && j)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[j]);
		j++;
	}
	printf("\n");
}
/**
 * main - checks my code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
