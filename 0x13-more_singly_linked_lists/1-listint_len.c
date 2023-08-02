#include "lists.h"

/**
 * listint_len - function that counts all the elements
 * of a struct list type listint_t
 * @h: pointer to the first member of a singly linked list
 * of structs of type listint_s
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h)
	{
		if (h->next)
			count += listint_len(h->next);

		return (count);
	}
	else
		return (0);
}
