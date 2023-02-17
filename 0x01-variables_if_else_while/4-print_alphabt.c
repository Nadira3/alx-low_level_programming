#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		if (x != 101 && x != 113)
			putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
