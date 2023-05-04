#include "main.h"
/**
 * _pow - finds the power of a number
 * @x: number
 * @y: power
 * Return: int
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
/**
 * print_binary - converts an integer to binary
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 0, start, bg;

	n = (long int)n < 0 ? -n : n;
	if (n == 0)
	{
		putchar('0');
		return;
	}	
	while (1)
	{
		bg = _pow(2, num);
		if (n <= bg)
		{
			start = n < bg ? --num : num;
			break;
		}
		num++;
	}
	while (n > 0)
	{
		num = _pow(2, start);
		if (n >= num)
		{
			putchar('1');
			n -= num;
		}
		else
			putchar('0');
		start--;
	}
	if (num != 1)
	{
		while (num > 1)
		{
			num -= _pow(2, start);
			putchar('0');
			start--;
		}

	}

}
