#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the linked list
 * @index: the index of the node, starting at 0
 *
 * Return:the nth node of a listint_t linked list.
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;/*for traversal*/
	unsigned int count = 0;/*to loop the linked list*/
	/*traverse from the head*/
	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}

