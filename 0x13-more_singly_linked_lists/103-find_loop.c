#include "lists.h"

/**
 * find_listint_loop - a function taht finds the loop in a linked list
 * @head: a pointer to head 
  * Return: the address of the node where the loop starts, or NULL if no loop
 */

listint_t	*find_listint_loop(listint_t *head)
{
	listint_t *first_p = head, *second_p = head;

	if (head && head->next)
	{
		while (first_p && second_p && second_p->next)
		{
			first_p = first_p->next;
			second_p = second_p->next->next;

			if (first_p == second_p)
			{
				first_p = head;
				while (first_p != second_p)
				{
					first_p = first_p->next;
					second_p = second_p->next;
				}
				return (first_p);
			}
		}
	}
	return (NULL);
}
