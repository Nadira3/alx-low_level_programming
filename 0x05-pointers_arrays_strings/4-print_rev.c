#include "main.h"
/**
 * print_rev - reverses a string and prints
 */
void print_rev(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
