#include "lists.h"

/**
 * add_nodeint - adds a new node to the start of a struct list type listint_t
 * @head: double pointer to the first elementof a singly linked list
 * of structs of type listint_s
 * @n: int to store in n element of new listint_s struct
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
