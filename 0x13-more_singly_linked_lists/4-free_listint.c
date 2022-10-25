#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the jead of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nav;

	while((nav = head) != NULL)
	{
		head = head->next;
		free(nav);
	}
}
