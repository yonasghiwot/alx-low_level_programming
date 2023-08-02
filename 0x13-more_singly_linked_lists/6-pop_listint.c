#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 * Return: int value of node deleted from start of list
 */

int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int num;

	if (!head)
		return (0);

	if (*head)
	{
		old_head = *head;
		*head = (*head)->next;
		num = old_head->n;
		free(old_head);
		return (num);
	}
	else
		return (0);
}
