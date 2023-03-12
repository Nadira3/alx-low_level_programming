#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of elements diagonally in both
 * directions
 * @a: array of numbers
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_a, sum_b;
	int *ptr = a;

	for (i = 0; i < size; i++)
	{
		sum_a += *ptr;
		ptr = ptr + (size + 1);
	}
	ptr = a + size - 1;
	for (i = 0; i < size; i++)
	{
		sum_b += *ptr;
		ptr = ptr + (size - 1);
	}
	printf("%d, %d\n", sum_a, sum_b);
}
