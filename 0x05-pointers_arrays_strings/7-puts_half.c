#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, len = 0, n;

	for (i = 0; str[i]; i++)
		len++;

	n = (len - 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i + 1]);
}
