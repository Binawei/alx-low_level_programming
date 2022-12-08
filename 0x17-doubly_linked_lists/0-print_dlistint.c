#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *trav = h;
	size_t count = 0;
	if (h == NULL)
	{
		return (EXIT_FAILURE);
	}
	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
		count++;
	}
	return (count);
}
