#include "lists.h"

/**
 * sum_listint - Sums a listint_t list
 * @head: head pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
