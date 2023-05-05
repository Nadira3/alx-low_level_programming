#include "main.h"
/**
 * set_bit - sets bit value at index to 1
 * @index: position of bit value
 * @n: number
 * Return: 1 if sucessful || -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0;

	if ((int)index < 0)
		return (-1);
	while (*n > 0)
	{
		*n /= 2;
		i++;
		if (i == index)
		{
			*n = *n % 2;
			return (1);
		}
	}
	return (-1);
}
