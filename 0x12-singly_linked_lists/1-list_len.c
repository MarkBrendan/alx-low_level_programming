#include "lists.h"

/**
 * list_len - Write a function that returns the number of
 * elements in a linked list_t list.
 *
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int listCount = 0;

	while (h != NULL)
	{
		h = h->next;

		listCount++;
	}
	return (listCount);



}
