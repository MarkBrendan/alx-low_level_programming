#include "lists.h"

/**
 * list_len - Write a function that returns the number of
 * elements in a linked list_t list.
 *
 * @h: pointer to the first linked list
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
