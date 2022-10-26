#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the address of the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	front = NULL;
	back = NULL;

	while (*head != NULL)
	{
		back = (*head)->next;
		(*head)->next = front;
		front = *head;
		*head = back;
	}

	*head = front;
	return (*head);
}
