#include "main.h"
/**
 * print_rev_recursion - prints a string, followed by a new line.
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;
	s = &s[len];
	if (s == &s[0])
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
