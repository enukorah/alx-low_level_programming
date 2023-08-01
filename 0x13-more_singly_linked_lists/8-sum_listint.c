#include "lists.h"

/**
 * sum_listint -Program that calculates sum lists
 * @head: The linked list first node
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
