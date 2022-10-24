#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: A pointer to pointer to the head of the list
 * @n: data of the new node to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*creat a new node called *new*/
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
/*make the next of new as the head*/
	new->next = (*head);
	/*move the head to point to the new node*/
	*head = new;

	return (new);
}
