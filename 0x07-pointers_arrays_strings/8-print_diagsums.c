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
	long int sum_a = 0, sum_b = 0;
	int *ptr = a;

	for (i = 0; i < size; i++)
	{
		sum_a += *(ptr + (size * i) + i);
		sum_b += *(ptr + ((i + 1) * (size - 1))); 
	}
	printf("%ld, %ld\n", sum_a, sum_b);
}
