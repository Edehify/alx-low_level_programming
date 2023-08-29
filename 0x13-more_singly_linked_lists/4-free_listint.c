#include "lists.h"

/**
 * free_listint - function to free a SLL
 * @head: pointer to the head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while ((t = head) != NULL)
	{
		head = head->next;
		free(t);
	}
}
