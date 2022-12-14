#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer of pointer to the first node of the list
 * @n: integer data of the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	 new_node->next = *head;
	 new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}
