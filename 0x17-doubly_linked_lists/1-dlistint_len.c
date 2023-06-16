#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @dlistint_t: list
 *
 * Return: doubly linked list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 1;
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
	return (len);
}
