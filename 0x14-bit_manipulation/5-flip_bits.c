#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: result in unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_len = sizeof(n) * 8;
	/* finds the no of bits of n by multiplying its size by 8 bytes */
	int i, flag = 0;
	/**
	 * declare a flag to detect when the most significant bit in a binary
	 * is found, to prompt printing to standard output with necessary
	 * condition
	 */
	unsigned long int bit_n, bit_m;

	for (i = bit_len - 1; i >= 0; i--)
	{
		bit_n = (n >> i) & 1;
		bit_m = (m >> i) & 1;
		/**
		 * within the loop, shift the binary forn of the integer
		 * i times to get the value of the right most bit and compare
		 * it with a constant value of 1 using the & bitwise operator
		 * and assign the value to bit
		 */
		if (bit_n != bit_m)
		{
			bit_m = bit_n;
			flag++;	
		}
	}
	return (flag);
}
