#include "main.h"
/**
 * space - puts space
 * @n: number
 */
void space(int n)
{
	int i;
	for (i = 0; i < n; i++)
		putchar(' ');
}
/**
 * print_diagonal - prints a diagonal
 * @n: number
 */
void print_diagonal(int n)
{
	int i;
	if (n <= 0)
		putchar('\n');
	for (i = 0; i < n; i++)
	{
		space(i);
		putchar('\\');
		putchar('\n');
	}
}
