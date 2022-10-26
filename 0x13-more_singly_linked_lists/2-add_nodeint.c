#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the address of the first node of a list
 * @n: integer to insert into the new node
 *
 * Return: If failure, return NULL.
 * Otherwise, return the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
