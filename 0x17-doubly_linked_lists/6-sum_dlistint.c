#include "lists.h"

/**
 * sum_dlistint -  Write a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: the head of the list
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
