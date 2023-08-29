#include "lists.h"

/**
 * free_listint2 - Function to free a SLL and set head to NULL
 * @head: double pointer to the head of the SLL
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *c;

	if (head != NULL)
	{
		c = *head;

		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}

		*head = NULL;
	}
}
