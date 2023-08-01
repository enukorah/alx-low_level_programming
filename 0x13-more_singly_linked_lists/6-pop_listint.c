#include "lists.h"

/**
 * pop_listint - program to delete the head node of a linked list
 * @head: head of the linked list
 * Return: the data from the elements that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
