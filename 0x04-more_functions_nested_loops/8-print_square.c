
#include <stdio.h>
void hash(int n)
{
	int i;
	for (i = 0; i < n; i++)
		putchar('#');
}
void print_square(int n)
{
	int i;
	if (n <= 0)
		putchar('\n');
	for (i = 0; i < n; i++)
	{
		hash(n);
		putchar('\n');
	}
}
