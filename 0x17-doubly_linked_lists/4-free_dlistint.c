#include "lists.h"
/**
 * free_dlistint - frees a double linked list
 * @head: pointer to begining of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
