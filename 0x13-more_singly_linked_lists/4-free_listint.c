#include "lists.h"

/**
 * free_listint - function that frees memory previously allocated
 * to a struct list type listint_t
 * @head: pointer to the first member of a singly linked list
 * of structs of type listint_s
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
