#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: integer value
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int k = i * j;

				if (k < 10)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar((k / 10) / 10 + '0');
					_putchar((k / 10) % 10 + '0');
					_putchar((k % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
}
