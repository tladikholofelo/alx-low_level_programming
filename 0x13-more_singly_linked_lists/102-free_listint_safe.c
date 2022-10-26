#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the head of a list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int n;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		n = *h - (*h)->next;
		if (n > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
