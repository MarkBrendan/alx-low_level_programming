#include "lists.h"

/**
 * listint_len - Write a function that returns the number of elements
 *  in a linked listint_t list.
 *
 * @h: the head
 *
 * Return: eturns the number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
