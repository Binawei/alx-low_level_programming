#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer of pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: the data value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp;
	unsigned int count;

	ptr = malloc(sizeof(dlistint_t));
	temp = *h;
	if (*h == NULL)
		return (NULL);

	count = 0;
	while (count != (idx - 1))
	{
		temp = temp->next;
		count++;
	}
	ptr->n = n;
	ptr->next = temp->next;
	temp->next->prev = ptr;
	temp->next = ptr;
	ptr->prev = temp;
	return (ptr);
}
