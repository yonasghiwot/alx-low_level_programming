#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: amount of chars in string
 */
int _strlen(const char *s)
{
	int length = 0;

	for (; *s; s++)
	{
		length++;
	}

	return (length);
}

/**
 * add_node_end - function that adds a new node at the end of
 * a struct type list_t linked list
 * @head: pointer to pointer to first element of list
 * @str: string to be inlcuded as element str of new list_t struct node
  * Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (!head && !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
