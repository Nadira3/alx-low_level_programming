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
 * convert_n_to_int - converts binary to integer
 * @b: pointer to string of numbers
 * Return: unsigned integer
 */
unsigned long int convert_n_to_int(int *b, int b_size)
{
	int i = 0, power, num;
	unsigned long int bin = 0;

	if (!b)
		return (0);
	power = b_size - 1;
	while (i < b_size)
	{
		num = b[i];
		bin += (_pow(2, power--)) * num;
		i++;
	}
	return (bin);
}
/**
 * print_binary - prints thr binary representation of a number
 * @n: number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_len = sizeof(*n) * 8;
	/* finds the no of bits of n by multiplying its size by 8 bytes */
	int i, flag = 0, j = 0, bin_arr[64];
	/**
	 * declare a flag to detect when the most significant bit in a binary
	 * is found, to prompt printing to standard output with necessary
	 * condition
	 */
	unsigned long int bit;

	for (i = bit_len - 1; i >= 0; i--)
	{
		bit = (*n >> i) & 1;
		/**
		 * within the loop, shift the binary forn of the integer
		 * i times to get the value of the right most bit and compare
		 * it with a constant value of 1 using the & bitwise operator
		 * and assign the value to bit
		 */
		if (bit == 1 || flag == 1)
		{
			bin_arr[j] = j == (int)index ? 1 : bit ? 1 : 0;
			j++;
			flag = 1;
		}
	}
	*n = convert_n_to_int(bin_arr, j);
	return ((int)index > j - 1 ? -1 : 1);
}
