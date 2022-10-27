#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: the head of the list
 */
void free_listp(listp_t **head)
{
	listp_t *temp, *copy;

	if (head != NULL)
	{
		copy = *head;
		while ((temp = copy) != NULL)
		{
			copy = copy->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - prints a listint_t linked list
 * @h: the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(const listint_t **h)
{
	size_t nodes = 0;
	listp_t *cap, *new, *add;
	listint_t *copy;

	cap = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)h;
		new->next = cap;
		cap = new;

		add = cap;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp(&cap);
				return (nodes);
			}
		}

		copy = *h;
		*h = (*h)->next;
		free(copy);
		nodes++;
	}

	*h = NULL;
	free_listp(&cap);
	return (nodes);
}
