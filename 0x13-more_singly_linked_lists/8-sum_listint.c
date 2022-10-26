#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a linked list
 * @head: pointer to the head of the list
 *
 * Return: If the list is empty, return 0.
 * Otherwise, return the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
