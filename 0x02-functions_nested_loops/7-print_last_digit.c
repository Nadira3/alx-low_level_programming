#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer argument
 * Return: thhe value of the last digit
 */
int print_last_digit(int n)
{
	long x;

	if (n < 0)
	{
		n = -n;
	}
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
