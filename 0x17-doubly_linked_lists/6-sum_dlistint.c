#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint_t linked list
 * @head: A pointer to the first node of the linked list
 *
 * Return: Sum of all the data of the lists and 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav;
	int count, sum = 0;

	trav = head;

	if (head == NULL)
	{
		return (0);
	}
	count = 0;
	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
		count++;
	}
	return (sum);
}
