#include "lists.h"
/**
 * listint_len - finds the number of elements in a list
 * @h: pointer to list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
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
