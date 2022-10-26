#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the address of the head of the list
 *
 * Return: If the linked list is empty return 0.
 * Otherwise, return the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
