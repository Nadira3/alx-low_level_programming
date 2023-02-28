#include "main.h"
/**
 * print_rev - reverses a string and prints
 * @s: string
 */
void print_rev(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
