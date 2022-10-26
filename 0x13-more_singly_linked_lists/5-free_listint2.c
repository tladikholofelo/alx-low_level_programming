#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the address of the head of the list
 *
 * Description: sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
