#include <stdio.h>
void space(int n)
{
	int i;
	for (i = 0; i < n; i++)
		putchar(' ');
}
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
