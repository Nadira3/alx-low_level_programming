#include <stdio.h>
void print_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
