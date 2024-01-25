#include "lists.h"

/**
 * print_dlistint - Write a function that prints all the elements of a
 * dlistint_t list
 * @h: the head of the list
 *
 * Return: numbers of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
