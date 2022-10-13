#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to search for the integer
 * @size: the number of element of the array
 * @cmp: a function that returns a pointer to be used to compare values
 * Return: the index of the first element for which cmp function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
