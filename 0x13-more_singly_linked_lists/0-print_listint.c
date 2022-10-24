#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a pointer to the head of the node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new;
	size_t count;

	count = 0;
	new = h;
	while (new != NULL)
	{
		printf("%d \n", new->n);
		new = new->next;
		count++;
	}
	return (count);
}
