#include "main.h"
/**
 * _pow - finds the power of a number
 * @x: number
 * @y: power
 * Return: int
 */
unsigned long int _pow(int x, unsigned long int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
/**
 * bit - finds the binary of a number
 * @n: number
 */
void bit(unsigned long int n)
{
	int i, num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (num_bits - 1);

	for (i = 0; i < num_bits; i++)
	{
		putchar((n & mask) ? '1' : '0');
		n <<= 1;
	}
}
/**
 * findStart - finds the binary of a number
 * @n: number
 * Return: unsigned long int
 */
unsigned long int findStart(unsigned long int n)
{
	unsigned long int num = 0, start, bg;

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
	return (start);
}
/**
 * print_binary - converts an integer to binary
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 0, start;

	n = (long int)n < 0 ? -n : n;
	if (n > INT_MAX)
	{
		bit(n);
		return;
	}
	if (n == 0)
	{
		putchar('0');
		return;
	}
	start = findStart(n);
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
