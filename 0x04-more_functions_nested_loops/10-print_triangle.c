#include "main.h"
/**
 * hash - puts #
 * @n: number
 */
void hash(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('#');
}
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size - i - 1; j >= 0; j--)
			_putchar(' ');
		hash(i);
		_putchar('\n');
	}
}
