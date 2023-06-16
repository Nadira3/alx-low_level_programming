#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @dlistint_t: list
 *
 * Return: doubly linked list length
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 1;
	dlistint_t *ptr;

	if (h)
	{
		ptr = h;
		while (ptr->next)
		{
			printf("%d\n", ptr->n);
			ptr = ptr->next;
			len++;
		}
	}
	return (len);
}
