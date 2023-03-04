#include "main.h"
/**
 * print_number - prints numbers
 * @n: number
 */
void print_number(int n)
{
	unsigned int m;
	int i, j;
	int num[80];

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	m = n;
	if (m == 0)
		_putchar(48);
	if (m > 0 && m < 10)
		_putchar(m + '0');
	for (i = 0; m / 10; i++)
	{
		num[i] = m % 10;
		m /= 10;
		if (m < 10)
			_putchar(m + '0');
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(num[j] + '0');
	}
}
