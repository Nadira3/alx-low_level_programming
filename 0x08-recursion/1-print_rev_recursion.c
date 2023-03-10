#include "main.h"
/**
 * _print_rev_recursion - prints a string, followed by a new line.
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	s--;
	_putchar(*s);
	if (*s == '\n')
		return;
}
