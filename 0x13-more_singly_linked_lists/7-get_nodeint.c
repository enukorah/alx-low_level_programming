#include "lists.h"

/**
 * get_nodeint_at_index - Program to find a node in a list.
 * @head: first node in a list.
 * @index: node index to be returned.
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
