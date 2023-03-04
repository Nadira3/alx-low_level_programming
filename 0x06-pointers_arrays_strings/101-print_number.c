#include "main.h"
/**
 * print_number - prints numbers
 * @n: number
 */
void print_number(int n)
{
	int i, j;
	int num[80];

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n == 0)
		_putchar(48);
	for (i = 0; n / 10; i++)
	{
		num[i] = n % 10;
		n /= 10;
		if (n < 10)
			_putchar(n + '0');
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(num[j] + '0');
	}
}
