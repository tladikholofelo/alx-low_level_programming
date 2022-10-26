#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: a pointer to the address of the first node of a list
 * @n: the integer to insert in the node
 *
 * Return: If failure, return NULL.
 * Otherwise, return the address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
