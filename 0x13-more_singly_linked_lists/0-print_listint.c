#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements
 * of a listint_t list.
 *
 * @h: the head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			return (-1);
		}
		else
		{
			n++;
			printf("%d\n", h->n);
		}
		h = h->next;
	}
	return (n);
}
