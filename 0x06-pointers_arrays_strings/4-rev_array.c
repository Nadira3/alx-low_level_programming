#include "main.h"
/**
 * reverse_array - compares two strings
 * @a: array
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
