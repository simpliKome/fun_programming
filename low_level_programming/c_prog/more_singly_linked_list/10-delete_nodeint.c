#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at nth index
 * @head: Head pointer
 * @index: integer value representing index
 *
 * Return: 1 if successsful
 * Otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr = *head;
	size_t len = listint_len(*head);
	unsigned int i = 0;

	if (curr == NULL || (index >= len))
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (curr != NULL)
	{
		i++;
		if ((i == index) && (curr->next != NULL))
		{
			temp = curr->next;
			curr = temp->next;
			free(curr);
			break;
		}
		curr = curr->next;
	}

	return (1);
}
