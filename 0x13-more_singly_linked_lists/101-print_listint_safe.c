#include "lists.h"

/**
 * loop_check- function checks if the linked list has not looped
 * @begin: begining of the list
 * @node: current node
 * @pos: the interval that should be at current position
 * Return: 1 if interval is correct, 0 if there is a loop
 */

size_t	loop_check(const listint_t *begin, const listint_t *node, size_t pos)
{
	size_t loopcheck = 0;

	while (begin != node)
	{
		begin = begin->next;
		loopcheck++;
	}

	return ((loopcheck == pos) ? 1 : 0);
}

/**
 * print_listint_safe - a function prints a listint_t linked list
 * @head: a pointer to list
 * Return: the number of nodes in the list
 */

size_t	print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *begin = head;

	if (head)
	{
		while (head && loop_check(begin, head, count))
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;

			count++;
		}

		if (head)
			printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
