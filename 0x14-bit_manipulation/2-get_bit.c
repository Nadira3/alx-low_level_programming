#include "main.h"
/**
 * get_bit - gets bit value at index
 * @index: position of bit value
 * @n: number
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0;

	n = (long int)n < 0 ? -n : n;
	if ((int)index < 0 || index > (sizeof(n) * 8))
		return (-1);
	while (n > 0)
	{
		if (i == index)
			return (n % 2);
		n /= 2;
		i++;
	}
	return (0);
}
