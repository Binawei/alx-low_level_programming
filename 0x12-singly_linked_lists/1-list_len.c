#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of element in a linked list
 * @h: the pointer to the head node
 *
 * Return: the number of element as integer
 */
size_t list_len(const list_t *h)
{
	size_t count;
	
	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

