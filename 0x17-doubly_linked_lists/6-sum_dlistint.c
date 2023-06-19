#include "lists.h"
/**
 * sum_dlistint - finds the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to begining of the list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;
	int sum = 0;

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
