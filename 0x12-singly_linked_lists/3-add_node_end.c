#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head
 * @str: string to duplicate to new code
 * Return: Address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int c;

	temp = *head;
	while (temp && temp->next != NULL)
	{
		temp = temp->next;
	}
	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = c;
	new->next = NULL;

	if (temp)
	{
		temp->next = new;
	}
	else
		*head = new;
	return (new);
}

