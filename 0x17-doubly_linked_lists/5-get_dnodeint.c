#include "lists.h"
/**
 * get_dnodeint_at_index - gets pointer to indexed node
 * @head: pointer to begining of the list
 * @index: position of node to be retrieved starting from 0
 *
 * Return: node pointer at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int i = 0;

	if (!head)
		return (0);
	ptr = head;
	while (i < index)
	{
		if (!ptr)
			break;
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
