#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @idx: the index of the list where the new node
 * should be added. Index starts at 0.
 * @head: pointer to the address of the head of the list
 * @n: integer value of the new node
 *
 * Return: If failure, return NULL. Otherwise, return address of the new node.
 * If it is not possible to add the new node at index idx,
 * do not add. Return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
