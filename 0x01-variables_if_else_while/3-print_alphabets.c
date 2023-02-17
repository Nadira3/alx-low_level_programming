#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
		putchar(x);
	for (x = 65; x < 91; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
