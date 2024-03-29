#include "lists.h"

/**
 * free_listint2 - function that frees memory previously allocated
 * to a struct list type listint_t, also sets head to NULL
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		if ((*head)->next)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
}
