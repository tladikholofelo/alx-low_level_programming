#include <stdio.h>>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: the pointer to list_t list to print
 *
 * Return: the number of nodes.
 * If str is NULL, print [0] (nil).
 */
size_t print_list(const list_t *h)
{
	size_t s;
	
	s = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
