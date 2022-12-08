#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: a pointer to the first element
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		current = current->next;
		free(current->next);
	}
	free(current);
	head = NULL;
}
