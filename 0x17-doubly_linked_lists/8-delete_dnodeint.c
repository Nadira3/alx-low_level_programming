#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to begining of the list
 * @index: position of deleted node
 *
 * Return: doubly linked list pointer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int i = 0;
	dlistint_t *ptr = NULL, *ptr2 = NULL, *ptr3 = NULL;

	if (!head || !*head)
		return (-1);
	ptr = *head;
	while (i < (int)index - 1)
	{
		if (!ptr)
			break;
		ptr = ptr->next;
		i++;
	}
	if (ptr)
	{
		ptr2 = ptr->next;
		if (!index)
		{
			if (ptr2)
				ptr2->prev = NULL;
			*head = ptr2;
			free(ptr);
		}
		else
		{
			ptr->next = ptr2->next;
			ptr3 = ptr2->next;
			ptr3->prev = ptr;
			free(ptr2);
		}
		return (1);
	}
	return (-1);
}
