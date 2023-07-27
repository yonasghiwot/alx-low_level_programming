#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen -a funtion returns the length of a string
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
 * add_node -function adds a new node at the start of a struct
 *           type list_t linked list
 * @head: pointer to pointer to first member of list
 * @str: string to be inlcuded as member str of new list_t struct node
 * Return: address of new member, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
