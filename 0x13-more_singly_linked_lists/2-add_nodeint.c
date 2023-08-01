#include "lists.h"

/**
 * add_nodeint - program adds a new node at the beginning of linked list
 * @head: pointer first node in list
 * @n: data type to insert
 * Return: the new address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
