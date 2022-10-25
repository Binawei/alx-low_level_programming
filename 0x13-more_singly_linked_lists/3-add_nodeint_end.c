#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head:A pointer to the first node of the linked list
 * @n: the data part of the new node to be added to the linkeed list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*creat  a pointer that will navigate the list till the end*/
	listint_t *nav;
	/*creat the new node to be added*/
	listint_t *new;

	nav = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/*updating the data part of the node  and link part*/
	new->n = n;
	new->next = NULL;

	/*traverse the list*/
	while (nav && nav->next != NULL)
	{
		nav = nav->next;
	}
	if (nav)
	{
		nav->next = new;
	}
	else
		*head = new;
	return (new);
}

