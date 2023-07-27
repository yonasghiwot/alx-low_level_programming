#include "lists.h"

/**
 * list_len -a function that returns the number of elements
 *          in a linked list_t list
 * @h: pointer to the 1st element of a singly linked list of
 *    structs of type list_t
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 1;

	if (h)
	{
		if (h->next)
			n = n + list_len(h->next);

		return (n);
	}
	else
		return (0);
}
