#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - Write a function that prints all the elements of a list_t list.
 *
 * @h: pointer to the first linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			cont++;
		}
		else
		{
			cont++;
			printf("[%ld] %s\n", strlen(h->str), h->str);
		}
		h = h->next;
	}
	return (cont);
}
