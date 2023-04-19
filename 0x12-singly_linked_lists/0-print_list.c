#include "lists.h"
/**
 * print_list - prints the content of a linked list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	if (h)
	{
		ptr = (list_t *)h;
		while (ptr)
		{
			count++;
			if (ptr->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
				printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	}
	return (count);
}
