#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: string
 */
void puts2(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;
	for (i = 0; i <= len; i = i + 2)
		_putchar(str[i]);
	_putchar(10);
}
