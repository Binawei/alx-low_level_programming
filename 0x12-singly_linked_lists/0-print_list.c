#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the element of the linked list list_t
 * @h: is a pointer to the head of the linked list
 *
 * Return:the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *new;
	size_t count = 0;
	

	if (h == NULL)
	{
		printf("[0] (nil)");
	}

	new = h;
	while (new != NULL)
	{
		printf("[%d] %s\n", new->len, new->str);
		new = new->next;
		count++;
	}
	return (count);
}

