#include "lists.h"

/**
 * free_list - Function that frees a linked list structure
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *prev = head;
	list_t *temp = head;

	if (temp == NULL)
		return;

	prev = temp;
	free(prev->str);
	temp = temp->next;
	free(prev);
	free_list(temp);
}
