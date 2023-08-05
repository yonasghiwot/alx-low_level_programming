#include "lists.h"

/**
 * free_listint_safe - a function frees a listint_t linked list
 * @head: double pointer to the list
 * Return: the number of nodes in the list
 */

size_t	free_listint_safe(listint_t **head)
{
	size_t count = 0, i = 0;
	listint_t *begin = *head, *tmp;

	if (*head)
	{
		while (*head && loop_check(begin, *head, count))
		{
			tmp = (*head)->next;
			*head = tmp;

			count++;
		}

		*head = begin;
		while (i < count)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
			i++;
		}

		if (*head)
			*head = NULL;
	}
	return (count);
}
