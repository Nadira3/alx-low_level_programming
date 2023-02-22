#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: integer value
 * Return: 0, 1 or -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
