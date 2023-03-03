#include "maim.h"
/*
 * print_number - prints a number using putchar
 * @n: numbe
 */r
void print_number(int n)
{
	int i;

	if (n < 10 && n >= 0)
		_putchar(n + '0');
	else if (!(n % 10))
	{
		print_number(n / 10);
	}
}
