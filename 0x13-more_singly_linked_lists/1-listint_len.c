#include "lists.h"

/**
 * listint_len - code returns the number of elements in a linked
 * @h: header pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	for (; h != NULL; cont++)
	{
		h = h->next;
	}
	return (cont);
}
