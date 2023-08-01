#include "lists.h"

/**
 * free_listint - program that frees a listint_t list
 * @head: input header pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
