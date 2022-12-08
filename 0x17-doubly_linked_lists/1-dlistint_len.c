#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len -  number of elements in a linked dlistint_t list.
 * @h: pointer to the first element of the list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *traversal;
	size_t count;
	traversal = h;
	
	count = 0;
	while (traversal != NULL)
	{
		traversal = traversal->next;
		count++;
	}
	return (count);
}
