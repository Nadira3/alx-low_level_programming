
#include <stdio.h>
void hash(int n)
{
	int i;
	for (i = 0; i < n; i++)
		putchar('#');
}

void print_triangle(int size)
{
	int i, j;
	if (size <= 0)
		putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size - i - 1; j >= 0; j--)
			putchar(' ');
		hash(i);
		putchar('\n');
	}
}
