#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: head pointer
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;
	size_t len = listint_len(*head);

	if (len == 0)
		return (0);

	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
