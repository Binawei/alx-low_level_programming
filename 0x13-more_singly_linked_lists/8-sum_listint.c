#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint -  returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: the head of the linked list
 *
 * Return:  returns the sum of all the data (n) of a
 * listint_t linked list. if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *tra;/*to traverse the linked list*/
	int sum = 0;

	tra = head;/*Initialize a pointer ptr with the head of the linked list*/
	while (tra != NULL)/*traverse using whlie loop*/
	{
		sum += tra->n;/*Add the value of current node to the sum*/
		tra = tra->next;/*Increment the pointer to the next node of linked list*/
	}
	return (sum);
	if (tra == NULL)
	{
		return (0);
	}
}

