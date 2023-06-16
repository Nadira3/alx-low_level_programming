#include "lists.h"
/**
 * dlistint_len - prints a doubly linked list
 * @h: list
 *
 * Return: doubly linked list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *ptr;

	if (h)
	{
		ptr = h;
		while (ptr->next)
		{
			ptr = ptr->next;
			len++;
		}
	}
	return (len + 1);
}
