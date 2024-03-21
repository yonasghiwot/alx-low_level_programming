#include "lists.h"

/**
 * sum_dlistint -a function that adds a new node at the beginning of
 * a dlistint_t list
 * n : data of a linked list.
 * @head: pointer pointes to pointer of head of linked list.
 * Return : the address of the new element, or NULL if it failed
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* while we have a pointer to the list */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
