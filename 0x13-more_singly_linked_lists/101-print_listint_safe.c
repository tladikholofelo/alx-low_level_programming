#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: the head of the list
 *
 * Return: the number of nodes in the list
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
 * print_listint_safe - prints a listint_t linked list
 * @head: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *cap, *new, *add;

	p = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = cap;
		cap = new;

		add = cap;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&cap);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&cap);
	return (nodes);
}
