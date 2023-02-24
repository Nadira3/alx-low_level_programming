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
 * print_square - prints a square
 * @n: number
 */
void print_square(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		hash(n);
		_putchar('\n');
	}
}
