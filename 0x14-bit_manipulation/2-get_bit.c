#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: the integer to check
 * @index:  is the index, starting from 0 of the bit you want to get
 *
 * Returns: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ind;

	ind = (n >> index) & 1;

	if ((ind == 1) || (ind == 0))
	{
		return (ind);
	}
	else
		return (-1);
}
