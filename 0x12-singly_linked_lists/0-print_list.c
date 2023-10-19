#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of a list_t list
 *
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int listCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;

		listCount++;
	}
	return (listCount);



}
