#include "main.h"
/**
 * print_binary - prints thr binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_len = sizeof(n) * 8;
	/* finds the no of bits of n by multiplying its size by 8 bytes */
	int i, flag = 0;
	/**
	 * declare a flag to detect when the most significant bit in a binary
	 * is found, to prompt printing to standard output with necessary
	 * condition
	 */
	unsigned long int bit;

	for (i = bit_len - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		/**
		 * within the loop, shift the binary forn of the integer
		 * i times to get the value of the right most bit and compare
		 * it with a constant value of 1 using the & bitwise operator
		 * and assign the value to bit
		 */
		if (bit == 1 || flag == 1)
		{
			putchar(bit ? '1' : '0');
			flag = 1;
		}
	}
	if (!flag)/* if flag is unset no true value was found and n is 0 */
		putchar('0');
}

