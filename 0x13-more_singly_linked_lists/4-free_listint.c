#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
