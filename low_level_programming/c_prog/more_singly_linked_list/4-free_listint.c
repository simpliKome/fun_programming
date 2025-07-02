#include "lists.h"

/**
 * free_listint - Frees a lisint_t list
 * @head: head pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *prev;

	if (temp == NULL)
		return;

	prev = temp;
	temp = temp->next;
	free(prev);
	free_listint(temp);
}
