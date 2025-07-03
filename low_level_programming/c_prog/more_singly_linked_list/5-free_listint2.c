#include "lists.h"

/**
 * free_listsint2 - Frees a listint_t list and sets head to NULL
 * @head: head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *prev;

	if (temp == NULL)
		return;

	prev = temp;
	temp = prev->next;
	free(prev);
	free_listint2(&temp);

	temp = NULL;
}
