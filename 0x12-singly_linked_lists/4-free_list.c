#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Write a function that frees a list_t list.
 *
 * @head: pointer to the first linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;


	}
	free(head);
}
