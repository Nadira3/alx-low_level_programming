#include "main.h"
/**
 * space - puts space
 * @n: number
 */
void space(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(' ');
}
/**
 * print_diagonal - prints a diagonal
 * @n: number
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		space(i);
		_putchar('\\');
		_putchar('\n');
	}
}
