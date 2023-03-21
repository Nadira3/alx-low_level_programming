#include "main.h"
#include <stdlib.h>
/**
 * main - prints the name of the file it was compiled from
 * Return: 0
 */
int main(void)
{
	char *s = __FILE__;

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar(10);
	return (0);
}
