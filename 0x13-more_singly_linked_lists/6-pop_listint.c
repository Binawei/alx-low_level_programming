#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: he head node’s data (n).
 * returns 0. if the link is empty
 */
int pop_listint(listint_t **head)
{
	/*declare a temporary pointer that will point to the head node*/
	listint_t *ptr;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	/*ptr points to NULL to disconnect it and then deallocate it*/
	ptr->next = NULL;
	free(ptr);
	return (data);
}
