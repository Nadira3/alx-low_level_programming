#include "lists.h"
/**
 * list_len - finds the number of elements in a list
 * @h: pointer to list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
