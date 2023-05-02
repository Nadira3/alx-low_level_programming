
#include "lists.h"
/**
 * print_listint - prints the content of a linked list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h)
	{
		ptr = (listint_t *)h;
		while (ptr)
		{
			count++;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
	}
	return (count);
}
